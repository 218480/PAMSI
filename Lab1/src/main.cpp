#include <iostream>
#include <time.h>
#define DEF_SIZE 5                 /*domyslny rozmiar tablicy po utworzeniu*/
using namespace std;

class tablica {
  int *tab=new int[DEF_SIZE];      /*tablica dynamiczna*/
  int csize=DEF_SIZE;              /*obecny rozmiar tablicy*/
  int occupied=1;                  /*nastepne miejsce w tablicy*/
public:
  /*dodaje element do tablicy i w razie potrzeby ja powieksza o 1*/
  void dodaj(int x){    
    int *temp=NULL;              /*nowa tablica na potrzeby powiekszenia*/
    int i;                       /*licznik petli*/
    if (occupied==csize)         /*sprawdza czy nie ma miejsc w tablicy*/
      {
	temp=new int[csize+1];   /*tworzy nowa tablice*/
	for(i=0;i<csize;i++)     /*przepisuje zawartosc tablicy*/
	  temp[i]=tab[i];
	delete [] tab;           /*zwalnia obszar zajety przez stara tablice*/
	tab=temp;                /*przypisuje nowa tablice do wskaznika*/
	csize++;                 /*zapisuje nowy rozmiar tablicy*/
      }
    tab[occupied-1]=x;           /*wpisuje zadana wartosc do tablicy*/
    occupied++;                  /*oznacza zajecie miejsca w tablicy*/
  }
  void display() {               /*wyswietla zawartosc tablicy na stdout*/
    int i=0;
    for(i=0;i<occupied-1;i++)
      cout << tab[i] << endl;
  }
};

int main () {
  int czas = clock();            /*zapisuje czas rozpoczecia pracy programu*/
  tablica ary;                   /*tworzy nowa tablice dynamiczna*/
  int i=0;                       /*licznik petli*/
  for(i=0;i<1000;i++)            /*dodaje wartosci do tablicy*/
  ary.dodaj(i);
  /*ary.display*/                /*wyswietla tablice*/
  /*wyswietla czas pracy programu*/
  cout << "czas: " << (clock()-czas)*1000/CLOCKS_PER_SEC << "ms" << endl;
  return 0;
}
