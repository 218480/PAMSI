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

using namespace std;
int main(){
pomiarta p1;
int i,danych[]={10,100,1000,1000000,1000000000};
for(i=0;i<5;i++){
cout<<danych[i]<<":"<<endl;
p1.wykonaj_pomiar(danych[i]);
}
  return 0;
};
