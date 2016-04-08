#ifndef guard_queue
#define guard_queue
#include "iqueue.h"
#include "list.h"
/*owijka listy dla struktury kolejki*/
class queue : public iqueue, public list
{
private:
  int add(int, int);
  void remove(int);
  int get(int);
 public:
  int pop(); /*usuwa pierwszy element kolejki i zwraca jego wartosc*/
  void push(int); /*dodaje element na koniec kolejki*/
  int size();

};

#endif
