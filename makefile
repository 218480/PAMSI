pamsi1.exe: main.o tablica.o stoper.o
	g++ -g -std=c++11 main.o tablica.o stoper.o -o pamsi1.exe

pomiartablicy.o: pomiartablicy.cpp tablica.h stoper.h interface.h
	g++ -g -std=c++11 -c -o pomiartablicy.o pomiartablicy.cpp

tablica.o: tablica.cpp tablica.h
	g++ -g -std=c++11 -c -o tablica.o tablica.cpp

main.o: main.cpp tablica.h stoper.h
	g++ -g -std=c++11 -c -o main.o main.cpp

stoper.o: stoper.cpp stoper.h
	g++ -g -std=c++11 -c -o stoper.o stoper.cpp

interface.o: interface.cpp
	g++ -g -std=c++11 -c -o interface.o interface.cpp
