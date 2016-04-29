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

using namespace std;
int main(){
int i, j, ilosc[]={10,100,1000,1000000,1000000000};
double czas;
pomiardrzewa p1;
for(i=0;i<5;i++){
czas=0;
for(j=0;j<10;j++){
czas+=p1.wykonaj_pomiar(ilosc[i])/10;
}
cout <<"czas pomiaru dla " << ilosc[i] << " danych: "<< czas << " ms" << endl;
}
  return 0;
};
