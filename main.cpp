#include <iostream>
#include "tablica.h"
#include "stoper.h"
#include "pomiartablicy.h"
#include "pomiarlisty.h"
#include "stack.h"
#include "list.h"
#include "queue.h"
#include "tablicaasocjacyjna.h"
#include "pomiarta.h"
#include "tree.h"
#include "pomiardrzewa.h"

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
