pamsi1.exe: ./obj/main.o ./obj/tablica.o ./obj/stoper.o ./obj/pomiartablicy.o ./obj/stack.o ./obj/list.o ./obj/queue.o ./obj/pomiarlisty.o 
	g++ -g -std=c++11 ./obj/main.o ./obj/tablica.o ./obj/stoper.o ./obj/pomiartablicy.o ./obj/stack.o ./obj/list.o ./obj/pomiarlisty.o ./obj/queue.o  -o pamsi1.exe

./obj/pomiartablicy.o: ./src/pomiartablicy.cpp ./inc/tablica.h ./inc/stoper.h ./inc/interface.h
	g++ -g -std=c++11 -c -o ./obj/pomiartablicy.o ./src/pomiartablicy.cpp

./obj/tablica.o: ./src/tablica.cpp ./inc/tablica.h
	g++ -g -std=c++11 -c -o ./obj/tablica.o ./src/tablica.cpp

./obj/main.o: ./src/main.cpp ./inc/tablica.h ./inc/stoper.h ./inc/stack.h
	g++ -g -std=c++11 -c -o ./obj/main.o ./src/main.cpp

./obj/stoper.o: ./src/stoper.cpp ./inc/stoper.h
	g++ -g -std=c++11 -c -o ./obj/stoper.o ./src/stoper.cpp

./obj/list.o: ./src/list.cpp ./inc/list.h ./inc/ilist.h ./inc/element.h
	g++ -g -std=c++11 -c -o ./obj/list.o ./src/list.cpp

./obj/stack.o: ./src/stack.cpp ./inc/stack.h ./inc/istack.h ./inc/ilist.h ./inc/element.h
	g++ -g -std=c++11 -c -o ./obj/stack.o ./src/stack.cpp

./obj/queue.o: ./src/queue.cpp ./inc/queue.h ./inc/iqueue.h ./inc/ilist.h ./inc/element.h
	g++ -g -std=c++11 -c -o ./obj/queue.o ./src/queue.cpp

./obj/pomiarlisty.o: ./src/pomiarlisty.cpp ./inc/pomiarlisty.h ./inc/interface.h
	g++ -g -std=c++11 -c -o ./obj/pomiarlisty.o ./src/pomiarlisty.cpp

