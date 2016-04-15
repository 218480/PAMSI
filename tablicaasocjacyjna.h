#ifndef guard_tablicaasocjacyjna
#define guard_tablicaasocjacyjna
#include "alist.h"
#include "node.h"

class tablicaasocjacyjna{
 private:
  alist listy[500];
  int hash(char*);
 public:
  int odczytaj(char*);
  int operator[](char* element){return odczytaj(element);}
  void dodaj(char*,int);
};

#endif
