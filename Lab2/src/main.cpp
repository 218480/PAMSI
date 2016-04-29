#include <iostream>
#include "../inc/tablica.h"
#include "../inc/stoper.h"
#include "../inc/pomiartablicy.h"

using namespace std;
int main(){
pomiartablicy p1;
int i=0, j=0, danych[]={10, 100, 1000, 1000000, 1000000000};
double avg=0, current;
for(j=0;j<5;j++){
for(i=0;i<10;i++){
current=p1.wykonaj_pomiar(danych[j]);
cout << "Pomiar" << i+1 << "/10: "<< current << endl;
avg+=current;
}
cout << "srednia dla " << danych[j] << " : " << avg/10 << endl;
avg=0;
}
  return 0;
};
