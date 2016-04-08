#include "list.h"
#include "stoper.h"
#include "pomiarlisty.h"
#include <iostream>
/*przyjmuje numer elementu do szyukania i zwraca usredniony czas dzialania*/
  double pomiarlisty::wykonaj_pomiar(int ilosc){
    list l1;
    double i=0, j=10;
  double czas=0;;
    stoper s1;
l1.fill(ilosc);
std::cout<<"wypelniono"<<std::endl;
  for(i=0;i<j;i++){
    s1.start();
    l1.get(ilosc);
    czas+=s1.stop();
  }
    return czas/j;
}
