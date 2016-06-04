pamsi1.exe: ./obj/main.o ./obj/tablica.o ./obj/stoper.o ./obj/pomiartablicy.o ./obj/stack.o ./obj/list.o ./obj/queue.o ./obj/pomiarlisty.o ./obj/alist.o ./obj/tablicaasocjacyjna.o ./obj/pomiarta.o ./obj/tree.o ./obj/pomiardrzewa.o ./obj/graph.o ./obj/dfs.o ./obj/bfs.o ./obj/pomiarprzeszukan.o ./obj/wgraph.o ./obj/bnb.o ./obj/pomiardrogi.o
	g++ -g -std=c++11 ./obj/main.o ./obj/tablica.o ./obj/stoper.o ./obj/pomiartablicy.o ./obj/stack.o ./obj/list.o ./obj/pomiarlisty.o ./obj/queue.o ./obj/alist.o ./obj/tablicaasocjacyjna.o ./obj/pomiarta.o ./obj/tree.o ./obj/pomiardrzewa.o ./obj/graph.o ./obj/dfs.o ./obj/bfs.o ./obj/pomiarprzeszukan.o ./obj/bnb.o ./obj/wgraph.o ./obj/pomiardrogi.o -o pamsi1.exe

./obj/pomiartablicy.o: ./src/pomiartablicy.cpp ./inc/tablica.h ./inc/stoper.h ./inc/interface.h
	g++ -g -std=c++11 -c -o ./obj/pomiartablicy.o ./src/pomiartablicy.cpp

./obj/tablica.o: ./src/tablica.cpp ./inc/tablica.h
	g++ -g -std=c++11 -c -o ./obj/tablica.o ./src/tablica.cpp

./obj/main.o: ./src/main.cpp ./inc/tablica.h ./inc/stoper.h ./inc/stack.h
	g++ -g -std=c++11 -c -o ./obj/main.o ./src/main.cpp

./obj/stoper.o: ./src/stoper.cpp ./inc/stoper.h
	g++ -g -std=c++11 -c -o ./obj/stoper.o ./src/stoper.cpp

./obj/interface.o: ./src/interface.cpp
	g++ -g -std=c++11 -c -o ./obj/interface.o ./src/interface.cpp

./obj/list.o: ./src/list.cpp ./inc/list.h ./inc/ilist.h ./inc/element.h
	g++ -g -std=c++11 -c -o ./obj/list.o ./src/list.cpp

./obj/stack.o: ./src/stack.cpp ./inc/stack.h ./inc/istack.h ./inc/ilist.h ./inc/element.h
	g++ -g -std=c++11 -c -o ./obj/stack.o ./src/stack.cpp

./obj/queue.o: ./src/queue.cpp ./inc/queue.h ./inc/iqueue.h ./inc/ilist.h ./inc/element.h
	g++ -g -std=c++11 -c -o ./obj/queue.o ./src/queue.cpp

./obj/pomiarlisty.o: ./src/pomiarlisty.cpp ./inc/pomiarlisty.h ./inc/interface.h
	g++ -g -std=c++11 -c -o ./obj/pomiarlisty.o ./src/pomiarlisty.cpp

./obj/alist.o: ./src/alist.cpp ./inc/alist.h ./inc/node.h
	g++ -g -std=c++11 -c -o ./obj/alist.o ./src/alist.cpp

./obj/tablicaasocjacyjna.o: ./inc/tablicaasocjacyjna.h ./src/tablicaasocjacyjna.cpp
	g++ -g -std=c++11 -c -o ./obj/tablicaasocjacyjna.o ./src/tablicaasocjacyjna.cpp

./obj/pomiarta.o: ./src/pomiarta.cpp ./inc/pomiarta.h
	g++ -g -std=c++11 -c -o ./obj/pomiarta.o ./src/pomiarta.cpp

./obj/tree.o: ./src/tree.cpp ./inc/tree.h
	g++ -g -std=c++11 -c -o ./obj/tree.o ./src/tree.cpp

./obj/pomiardrzewa.o: ./inc/pomiardrzewa.h ./src/pomiardrzewa.cpp
	g++ -g -std=c++11 -c -o ./obj/pomiardrzewa.o ./src/pomiardrzewa.cpp

./obj/graph.o: ./inc/graph.h ./inc/igraph.h ./src/graph.cpp
	g++ -g -std=c++11 -c -o ./obj/graph.o ./src/graph.cpp

./obj/dfs.o: ./inc/dfs.h ./src/dfs.cpp ./inc/stack.h
	g++ -g -std=c++11 -c -o ./obj/dfs.o ./src/dfs.cpp

./obj/bfs.o: ./inc/bfs.h ./src/bfs.cpp ./inc/queue.h
	g++ -g -std=c++11 -c -o ./obj/bfs.o ./src/bfs.cpp

./obj/pomiarprzeszukan.o: ./inc/pomiarprzeszukan.h ./src/pomiarprzeszukan.cpp
	g++ -g -std=c++11 -c -o ./obj/pomiarprzeszukan.o ./src/pomiarprzeszukan.cpp

./obj/wgraph.o: ./inc/wgraph.h ./src/wgraph.cpp
	g++ -g -std=c++11 -c -o ./obj/wgraph.o ./src/wgraph.cpp

./obj/bnb.o: ./inc/bnb.h ./src/bnb.cpp ./inc/path.h ./inc/stack.h ./inc/wgraph.h
	g++ -g -std=c++11 -c -o ./obj/bnb.o ./src/bnb.cpp

./obj/pomiardrogi.o: ./inc/pomiardrogi.h ./src/pomiardrogi.cpp
	g++ -g -std=c++11 -c -o ./obj/pomiardrogi.o ./src/pomiardrogi.cpp
