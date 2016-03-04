#include <iostream>
#include <time.h>
#define DEF_SIZE 5
using namespace std;

class tablica {
  int *tab=new int[DEF_SIZE];
  int csize=DEF_SIZE;
  int occupied=1;
public:
  void dodaj(int x){
    int *temp=NULL;
    int i;
    if (occupied==csize)
      {
	temp=new int[csize+1];
	for(i=0;i<csize;i++)
	  temp[i]=tab[i];
	delete [] tab;
	tab=temp;
	csize++;
      }
    tab[occupied-1]=x;
    occupied++;
  }
  void display() {
    int i=0;
    for(i=0;i<occupied-1;i++)
      cout << tab[i] << endl;
  }
};

int main () {
  int czas = clock();
  tablica ary;
  int i=0;
  for(i=0;i<1000;i++)
  ary.dodaj(i);
  /*ary.display();*/
  cout << "czas: " << (clock()-czas)*1000/CLOCKS_PER_SEC << "ms" << endl;
  return 0;
}
