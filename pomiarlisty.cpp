#include "list.h"
#include "stoper.h"
#include "pomiarlisty.h"
/*przyjmuje numer elementu do szyukania i zwraca usredniony czas dzialania*/
  double pomiarlisty::wykonaj_pomiar(int ilosc){
    list l1;
    double i=0, j=1;
  double czas=0;;
    stoper s1;
  for (i=0;i<ilosc;i++)
    l1.add(i,1);
  for(i=0;i<j;i++){
    s1.start();
    l1.get(ilosc);
    czas+=s1.stop();
  }
    return czas/j;
}
