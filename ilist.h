#include "element.h"
#ifndef guard_ilist
#define guard_ilist
/*interface listy*/
class ilist
{
 public:
  virtual int add(int, int)=0; /*dodaje element do listy parametry: (wartosc, pozycja na liscie) w przypadku gdy pozycja>rozmiar dodaje na pozycja=rozmiar i zwraca nowy rozmiar listy*/
  virtual void remove(int)=0; /*usuwa z listy element na pozycji zadanej parametrem wywolania*/
  virtual int get(int)=0; /*zwraca wartosc elementu na pozycji zadanej parametrem wywolania*/
  virtual int size()=0; /*zwraca rozmiar listy*/
};
#endif
