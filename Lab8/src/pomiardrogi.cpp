#include "../inc/stoper.h"
#include "../inc/pomiardrogi.h"
#include "../inc/wgraph.h"
#include "../inc/bnb.h"
#include <iostream>

  double pomiardrogi::wykonaj_pomiar(int ilosc){
stoper t1;
wgraph g1;
bnb b1;
int i=0, total=0;
srand(time(NULL));
g1.test(ilosc);
for(int i=0;i<ilosc*10;i++)
g1.add_edge(rand() % ilosc, rand() % ilosc,rand() % 10);
t1.start();
for(i=0;i<10;i++) total+=b1.search(g1,0,ilosc-1);
std::cout<< "average bnb edges checked for size "<< ilosc <<" : "<<total/10<<std::endl;
std::cout<<"in time: "<<t1.stop()/10<<" ms"<<std::endl;
total=0;
t1.start();
for(i=0;i<10;i++) total+=b1.esearch(g1,0,ilosc-1);
std::cout<< "average bnbe edges checked for size "<< ilosc <<" : "<<total/10<<std::endl;
std::cout<<"in time: "<<t1.stop()/10<<" ms"<<std::endl;


    return t1.stop();
}
