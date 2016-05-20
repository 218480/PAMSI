#ifndef guard_path
#define guard_path
#include "../inc/stack.h"
class path{
 public:
  stack s;
  int len=0;
void push(int a){s.push(a);}
int pop(){return s.pop();}
};


#endif
