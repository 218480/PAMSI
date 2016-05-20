#include "../inc/stoper.h"
#include "../inc/pomiardrogi.h"
#include "../inc/stack.h"
#include "../inc/wgraph.h"
#include "../inc/bnb.h"
#include "../inc/bnbe.h"
#include <iostream>

  double pomiardrogi::wykonaj_pomiar(int ilosc){
stack s1,s2;
wgraph g1;
stoper t1;
bnb b1;
bnbe e1;
int i,b1e=0,be1e=0;/*
for(i=0;i<ilosc;i++){
g1.add_vertex();
if(i>0) g1.add_edge(i,i-1);
}*/
g1.test(ilosc);
t1.start();
std::cout<<ilosc<<" elementow:"<<std::endl;/*
for(i=0;i<10;i++){s1=b1.search(g1,0,ilosc-1);b1e+=b1.edges;}
std::cout<<"czas dla bnb: "<<t1.stop()/10<<", krawedzi: "<<b1e/10<<std::endl;
t1.start();*/
for(i=0;i<10;i++){s2=e1.search(g1,0,ilosc-1);be1e+=e1.edges;}
std::cout<<"czas dla bnbe: "<<t1.stop()/10<<", krawedzi: "<<be1e/10<<std::endl;
    return t1.stop();
}
