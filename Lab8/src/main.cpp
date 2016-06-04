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
#include "../inc/pomiardrogi.h"

using namespace std;
int main(){
pomiardrogi d1;
int i=0,ilosc[]={10,100,1000,10000,100000,1000000};
for(i=0;i<6;i++)d1.wykonaj_pomiar(ilosc[i]);

};
