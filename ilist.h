#include "element.h"
#ifndef guard_ilist
#define fuard_ilist
class ilist
{
 public:
  virtual int add(int, int)=0;
  virtual void remove(int)=0;
  virtual int get(int)=0;
  virtual int size()=0;
};
#endif