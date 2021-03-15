CC = g++
CFLAGS = -g -std=c++11

all: run

person.o:
	$(CC) $(CFLAGS) -c Person.cpp

artist.o:
	$(CC) $(CFLAGS) -c Artist.cpp

athlete.o:
	$(CC) $(CFLAGS) -c Athlete.cpp

main.o: 
	$(CC) $(CFLAGS) -c main.cpp

compile: main.o artist.o athlete.o person.o
	$(CC) $(CFLAGS) -o main.out main.o artist.o athlete.o person.o

run: compile
	./main.out

clean:
	rm *.o *.out

clean-window:
	cmd //C del *.o *.out