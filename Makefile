CC = g++
CFLAGS = -g -std=c++11

all: run

artist.o:
	$(CC) $(CFLAGS) -c artist.cpp

athlete.o:
	$(CC) $(CFLAGS) -c athlete.cpp

main.o: 
	$(CC) $(CFLAGS) -c main.cpp

compile: main.o artist.o athlete.o
	$(CC) $(CFLAGS) -o main.out main.o artist.o athlete.o

run: compile
	./main.out

clean:
	rm *.o *.out

clean-window:
	cmd //C del *.o *.out