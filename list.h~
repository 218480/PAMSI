#ifndef guard_list
#define guard_list
#include "ilist.h"
/*implementacja listy*/
class list : public ilist
{
private:
  element *first=nullptr; /*wskaznik na pierwszy element listy*/
  element* search(int); /*wyszukuje w liscie element o zadanej pozycji i zwraca wskaznik na ten element*/
 public: /*implementacja metod odziedziczonych z interface listy*/
  int add(int, int);
  void remove(int);
  int get(int);
  int size();

};

#endif
