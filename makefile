all: students

students: main.o address.o date.o
	g++ -o students main.o address.o date.o
main.o: main.cpp address.h date.h
	g++ -c main.cpp
address.o: address.cpp address.h
	g++ -c address.cpp
date.o: date.cpp date.h
	g++ -c date.cpp
run: students
	./students
debug: students 
	gdb students 
valgrind: students
	valgrind --leak-check=full ./students
clean:
	rm -f main.o address.o date.o students
