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

using namespace std;
int main(){
  int i, j, ilosc[]={10,100,1000,10000,100000,1000000};
double  suma=0;
pomiarprzeszukan p1;
for(i=0;i<6;i++)
{
suma=0;
for(j=0;j<10;j++)
suma+=p1.wykonaj_pomiar(ilosc[i])/10;
cout<<"czas dla " << ilosc[i] << " elementow: " << suma << " ms" << endl;
}
  return 0;
};
