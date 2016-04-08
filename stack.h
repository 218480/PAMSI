#ifndef guard_stack
#define guard_stack
#include "istack.h"
#include "list.h"
/*owijka listy dla struktury stosu*/
class stack : public istack, public list
{
private:
  element *top=nullptr; /*szczyt stosu*/
  int add(int, int);
  void remove(int);
  int get(int);
 public:
  int pop(); /*zdejmuje element ze stosu i zwraca jego wartosc*/
  void push(int); /*wklada element na stos*/
  int size();

};

#endif
