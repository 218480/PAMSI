#include "tablicaasocjacyjna.h"
#include "alist.h"
int tablicaasocjacyjna::hash(std::string klucz){
  int v=0,i=0;
  char temp;
for(i=0;i<klucz.length()-1;i++){
  v+=klucz[i];}
  return v;
}
int tablicaasocjacyjna::odczytaj(std::string klucz){
  node *temp=listy[hash(klucz)].first;
  while(temp->key!=klucz)
    temp=temp->next;
  return temp->value % size;
}
void tablicaasocjacyjna::dodaj(std::string klucz, int wartosc){
  listy[hash(klucz)].add(wartosc, 0, klucz);
}
