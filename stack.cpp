#include "stack.h"
int stack::size()
{
  int i=0;
  element *test=top;
  while(test!=nullptr)
    {
      test=test->next;
      i++;
    }
  return i;
}

void stack::remove(int position){
  element *temp=top;
  if (size()>0){
  top=top->next;
  delete temp;
  }
}

int stack::get(int position){
  if (size()>0)
  return top->ele;
  else return 0;
}


int stack::add(int numb, int position){
  element *nowy = new element;
  nowy->ele=numb;
  nowy->next = top;
  top = nowy;
  return size();
}

int stack::pop(){
  int temp=get(0);
  remove(0);
  return temp;
}

void stack::push(int number){
  add(number, 0);
}
