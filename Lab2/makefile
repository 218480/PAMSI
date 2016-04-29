pamsi1.exe: ./obj/main.o ./obj/tablica.o ./obj/stoper.o ./obj/pomiartablicy.o 
	g++ -g -std=c++11 ./obj/main.o ./obj/tablica.o ./obj/stoper.o ./obj/pomiartablicy.o -o pamsi1.exe

./obj/pomiartablicy.o: ./src/pomiartablicy.cpp ./inc/tablica.h ./inc/stoper.h ./inc/interface.h
	g++ -g -std=c++11 -c -o ./obj/pomiartablicy.o ./src/pomiartablicy.cpp

./obj/tablica.o: ./src/tablica.cpp ./inc/tablica.h
	g++ -g -std=c++11 -c -o ./obj/tablica.o ./src/tablica.cpp

./obj/main.o: ./src/main.cpp ./inc/tablica.h ./inc/stoper.h
	g++ -g -std=c++11 -c -o ./obj/main.o ./src/main.cpp

./obj/stoper.o: ./src/stoper.cpp ./inc/stoper.h
	g++ -g -std=c++11 -c -o ./obj/stoper.o ./src/stoper.cpp


