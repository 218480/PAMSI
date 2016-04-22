#ifndef guard_alist
#define guard_alist
#include "ilist.h"
#include "node.h"
#include <string>
/*implementacja listy*/
class alist 
{
 public:
  node *first=0;
int rozmiar=0; /*wskaznik na pierwszy element listy*/
  node* search(int); /*wyszukuje w liscie element o zadanej pozycji i zwraca wskaznik na ten element*/
 /*implementacja metod odziedziczonych z interface listy*/
  int add(int, int, std::string);
  void remove(int);
  int get(int);
  int size();
void fill(int);

};

#endif
