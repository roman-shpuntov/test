# HACKATOMSK 2017
### URL
http://hackatomsk.ru/task/f6zbwZynox9SRAFDq

### Task
```
Формат представления результата

Результат представляется в виде ссылки на github или gitlab репозиорий
Требуется написать код, в котором будет функция умножающая 2 на X, где X - номер текущей итерации. Функция выдает ответ с задержкой в рандомном интервале от 0 до 1000 миллисекунд.

Код должен запускать эту функцию 10 раз в асинхронном режиме и выводить результат в стандартную консоль, таким образом, чтобы ответы шли последовательно.

Пример на абстрактном языке:

func calc(x , resolve, reject) {

    wait(rand(0, 1000))
    resolve(2 * x)
}

for (x = 0; x < 10; x++) {
    log calc(x)
}
Результат:

0 
2 
4 
6 
8 
10 
12 
14 
16 
18 
```

### Build
```
$ make
```

### Run
```
$ ./hackatest
```

### Requirements
```
c++11 compiler
```

### Build machine config
```
bash-3.2$ g++ --version
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 9.0.0 (clang-900.0.38)
Target: x86_64-apple-darwin17.2.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```
