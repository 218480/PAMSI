pamsi1.exe: main.o tablica.o stoper.o pomiartablicy.o stack.o list.o queue.o pomiarlisty.o alist.o tablicaasocjacyjna.o
	g++ -g -std=c++11 main.o tablica.o stoper.o pomiartablicy.o stack.o list.o pomiarlisty.o queue.o alist.o tablicaasocjacyjna.o -o pamsi1.exe

pomiartablicy.o: pomiartablicy.cpp tablica.h stoper.h interface.cpp
	g++ -g -std=c++11 -c -o pomiartablicy.o pomiartablicy.cpp

tablica.o: tablica.cpp tablica.h
	g++ -g -std=c++11 -c -o tablica.o tablica.cpp

main.o: main.cpp tablica.h stoper.h stack.h
	g++ -g -std=c++11 -c -o main.o main.cpp

stoper.o: stoper.cpp stoper.h
	g++ -g -std=c++11 -c -o stoper.o stoper.cpp

interface.o: interface.cpp
	g++ -g -std=c++11 -c -o interface.o interface.cpp

list.o: list.cpp list.h ilist.h element.h
	g++ -g -std=c++11 -c -o list.o list.cpp

stack.o: stack.cpp stack.h istack.h ilist.h element.h
	g++ -g -std=c++11 -c -o stack.o stack.cpp

queue.o: queue.cpp queue.h iqueue.h ilist.h element.h
	g++ -g -std=c++11 -c -o queue.o queue.cpp

pomiarlisty.o: pomiarlisty.cpp pomiarlisty.h interface.cpp
	g++ -g -std=c++11 -c -o pomiarlisty.o pomiarlisty.cpp

alist.o: alist.cpp alist.h node.h
	g++ -g -std=c++11 -c -o alist.o alist.cpp

tablicaasocjacyjna.o: tablicaasocjacyjna.h tablicaasocjacyjna.cpp
	g++ -g -std=c++11 -c -o tablicaasocjacyjna.o tablicaasocjacyjna.cpp
