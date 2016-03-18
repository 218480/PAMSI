#include "tablica.h"
#include "stoper.h"
#include "interface.h"

class pomiartablicy: public interface
{
public:
  double wykonaj_pomiar(int ilosc){
    tablica tab;
    int i=0;
    stoper s1;
    s1.start();
    for(i=0;i<ilosc;i++)
      tab.dodaj(i);
    return s1.stop();
  }


};
