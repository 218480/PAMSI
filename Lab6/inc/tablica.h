#ifndef guard_tablica
#define guard_tablica
#define DEF_SIZE 10
/*implementacja tablicy dynamicznej*/
class tablica
{  
  int *tab=new int[DEF_SIZE];      /*tablica dynamiczna*/
  int csize=DEF_SIZE;              /*obecny rozmiar tablicy*/
  int occupied=1;                  /*nastepne miejsce w tablicy*/
 public:
~tablica(){delete tab;};
  void dodaj(int x); /*dodaje element do tablicy powiekszajac ja w razie potrzeby*/
  void display(); /*wyswietla zawartosc tablicy*/
};

#endif
