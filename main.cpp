#include <iostream>
#include "tablica.h"
#include "stoper.h"
#include "pomiartablicy.h"
#include "pomiarlisty.h"
#include "stack.h"
#include "list.h"
#include "queue.h"

using namespace std;
int main(){
pomiarlisty p1;
int i=0, number[]={10,100, 1000, 1000000, 1000000000};
for(i=0;i<5;i++)
cout << "czas dla " << number[i] << " elementow: " << p1.wykonaj_pomiar(number[i]) << endl;
  return 0;
};
