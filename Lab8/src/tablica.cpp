#include <iostream>
#include "../inc/tablica.h"



void tablica::dodaj(int x){    
    int *temp=nullptr;              /*nowa tablica na potrzeby powiekszenia*/
    int i;                       /*licznik petli*/
    if (occupied==csize)         /*sprawdza czy nie ma miejsc w tablicy*/
      {
	temp=new int[csize+100];   /*tworzy nowa tablice*/
	for(i=0;i<csize;i++)     /*przepisuje zawartosc tablicy*/
	  temp[i]=tab[i];
	delete [] tab;           /*zwalnia obszar zajety przez stara tablice*/
	tab=temp;                /*przypisuje nowa tablice do wskaznika*/
	csize+=100;                 /*zapisuje nowy rozmiar tablicy*/
      }
    tab[occupied-1]=x;           /*wpisuje zadana wartosc do tablicy*/
    occupied++;                  /*oznacza zajecie miejsca w tablicy*/
  }
void tablica::display() {               /*wyswietla zawartosc tablicy na stdout*/
    int i=0;
    for(i=0;i<occupied-1;i++)
      std::cout << tab[i] << std::endl;
  }

