#include "queue.h"
int queue::size()
{
  return list::size();
}

void queue::remove(int position){
list::remove(position);
}

int queue::get(int position){
return list::get(position);
}


int queue::add(int numb, int position){
list::add(numb, position);
  return size();
}

int queue::pop(){
  int temp;
if(size()>0){
temp=get(1);
  remove(1);
  return temp;}
else return -1;
}

void queue::push(int number){
  add(number, size());
}
