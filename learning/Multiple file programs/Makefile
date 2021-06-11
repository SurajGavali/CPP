main: main.o main_utils.o
	g++ main.o main_utils.o -o main

main.o:main.cpp
	g++ -c main.cpp

main_utils.o: main_utils.cpp
	g++ -c main_utils.cpp

clean:
	rm *.o main
