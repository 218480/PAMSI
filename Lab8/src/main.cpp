#include <iostream>
#include "../inc/tablica.h"
#include "../inc/stoper.h"
#include "../inc/pomiartablicy.h"
#include "../inc/pomiarlisty.h"
#include "../inc/stack.h"
#include "../inc/list.h"
#include "../inc/queue.h"
#include "../inc/tablicaasocjacyjna.h"
#include "../inc/pomiarta.h"
#include "../inc/tree.h"
#include "../inc/pomiardrzewa.h"
#include "../inc/graph.h"
#include "../inc/dfs.h"
#include "../inc/bfs.h"
#include "../inc/pomiarprzeszukan.h"
#include "../inc/wgraph.h"
#include "../inc/bnb.h"
#include "../inc/bnbe.h"
#include "../inc/pomiardrogi.h"

using namespace std;
int main(){
pomiardrogi d1;
int i,ilosc[]={10,50,100,500,1000};
for(i=0;i<5;i++)d1.wykonaj_pomiar(ilosc[i]);/*
wgraph g1;
bnbe b1;
stack s1;
int i=0,s;
for(i=0;i<10;i++)
g1.add_vertex();
g1.add_edge(0,1,1);g1.add_edge(0,2,4);g1.add_edge(1,3,2);g1.add_edge(1,4,1);g1.add_edge(2,3,1);g1.add_edge(3,4,3);g1.add_edge(3,5,15);
g1.add_edge(4,7,2);g1.add_edge(5,6,3);g1.add_edge(5,9,1);g1.add_edge(6,7,1);g1.add_edge(6,8,2);g1.add_edge(7,8,1);

s1=b1.search(g1,0,9);
s=s1.size();
for(i=0;i<s;i++)
cout<<s1.pop()<<"->";
cout<<endl<<"dist: "<<b1.lenght<<endl;
cout<<"edges: "<<b1.edges<<endl;*/
  return 0;
};
