#ifndef guard_stack
#define guard_stack
#include "istack.h"

class stack : public istack
{
private:
  element *top=nullptr;
  int add(int, int);
  void remove(int);
  int get(int);
 public:
  int pop();
  void push(int);
  int size();

};

#endif
