#ifndef guard_tablica
#define guard_tablica
#define DEF_SIZE 10

class tablica
{  
  int *tab=new int[DEF_SIZE];      /*tablica dynamiczna*/
  int csize=DEF_SIZE;              /*obecny rozmiar tablicy*/
  int occupied=1;                  /*nastepne miejsce w tablicy*/
 public:
  void dodaj(int x);
  void display();
};

#endif