PROGRAM=t4-dsa-l1-v5
OBJECTS=main.o
CFLAGS=-Wall -Wextra -Werror -std=c++11
CC=g++

.PHONY: all clean

all: main

main: main.o
	$(CC) -o $(PROGRAM) $(OBJECTS)

main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS)

clean:
	$(RM) $(PROGRAM) $(OBJECTS)
