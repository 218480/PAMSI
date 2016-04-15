#include "tablicaasocjacyjna.h"
#include "alist.h"
int tablicaasocjacyjna::hash(char *klucz){
  int v=0;
  char *temp=klucz;
  v+=*temp++;
  v+=*temp++;
  v+=*temp++;
  return v;
}
int tablicaasocjacyjna::odczytaj(char *klucz){
  node *temp=listy[hash(klucz)].first;
  while(temp->key!=klucz)
    temp=temp->next;
  return temp->value;
}
void tablicaasocjacyjna::dodaj(char *klucz, int wartosc){
  listy[hash(klucz)].add(wartosc, 1, klucz);
}
