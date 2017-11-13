#include <iostream>
#include <chrono>
#include <thread>
#include <random>

using namespace std;

void _calc(int x, vector<int> & results)
{
    random_device			rd;
    mt19937				rng(rd());
    uniform_int_distribution<int>	uni(0, 1000);
    
    chrono::milliseconds msec(uni(rng));
    this_thread::sleep_for(msec);

    results[x] = x * 2;
}

int main(int argc, char *argv[])
{
    const int		mtasks = 10;
    int			i;
    vector<thread>	tasks;
    vector<int>		results;

    results.reserve(mtasks);
    for (i=0; i<mtasks; i++)
	results.push_back(0);

    for (i=0; i<mtasks; i++)
	tasks.push_back(thread(_calc, i, ref(results)));

    for (i=0; i<tasks.size(); i++)
    {
	if (tasks[i].joinable())
            tasks[i].join();
    }

    sort(results.begin(), results.end(), less<int>());
    for (i=0; i<results.size(); i++)
	cout << results[i] << endl;

    return 0;
}
