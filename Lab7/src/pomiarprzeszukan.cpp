#include "../inc/tablica.h"
#include "../inc/stoper.h"
#include "../inc/pomiarprzeszukan.h"
#include "../inc/stack.h"
#include "../inc/graph.h"
#include "../inc/dfs.h"
#include "../inc/bfs.h"

  double pomiarprzeszukan::wykonaj_pomiar(int ilosc){
stack s1;
graph g1;
stoper t1;
bfs f1;
int i;/*
for(i=0;i<ilosc;i++){
g1.add_vertex();
if(i>0) g1.add_edge(i,i-1);
}*/
g1.test(ilosc);
t1.start();
s1=f1.search(g1,0,ilosc-1);
    return t1.stop();
}
