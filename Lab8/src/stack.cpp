#include "../inc/stack.h"
#include <iostream>
int stack::size()
{
  return list::size();
}

void stack::remove(int position){
list::remove(position);
}

int stack::get(int position){
return list::get(position);
}


int stack::add(int numb, int position){
list::add(numb, position);
  return size();
}

int stack::pop(){
  int temp;
if(size()>0){
temp=get(1);
  remove(1);
  return temp;}
else return -1;
}

void stack::push(int number){
  add(number, 0);
}

