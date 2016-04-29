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
