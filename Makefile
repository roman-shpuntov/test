CC=g++

OBJ=main.o

CPPFLAGS=-Wall -std=c++11
.cpp.o:
	$(CC) -c $< $(CPPFLAGS)

APP=hackatest

all: APP

APP: $(OBJ)
	$(CC) -o $(APP) $(OBJ)

clean:
	rm -f *.o
	rm -f $(APP)
