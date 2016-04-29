#ifndef guard_tablicaasocjacyjna
#define guard_tablicaasocjacyjna
#include "../inc/alist.h"
#include "../inc/node.h"

class tablicaasocjacyjna{
 private:
  int size=10;
  alist *listy;
  int hash(std::string);
 public:
 tablicaasocjacyjna(unsigned int a){size =a; listy = new alist[size];}
~tablicaasocjacyjna(){delete [] listy;}
  int odczytaj(std::string);
  int operator[](std::string element){return odczytaj(element);}
  void dodaj(std::string,int);
};

#endif
