#include "list.h"
int list::size()
{
  int i=0;
  element *test=first;
  while(test!=nullptr)
    {
      test=test->next;
      i++;
    }
  return i;
}

element* list::search(int position){
element *test=first;
double s=size();
if(s<position)
position=s;
while (position>1){
test=test->next;
position--;
    }
return test;
}

void list::remove(int position){
  element *temp;
  element *temp2;
if(position==1){
temp=first->next;
delete first;
first=temp;
}
else
if(size()>=position){
  temp=search(position-1);
  temp2=temp->next;
  temp->next=temp2->next;
  delete temp2;
  }
}

int list::get(int position){
element *temp;
double s=size();
  if (s>=position)
  {
temp=search(position);
  return temp->ele;
  }
  else return 0;
}


int list::add(int numb, int position){
  element *nowy = new element;
  element *temp, *temp2;
double s=size();
  nowy->ele=numb;
if(s!=0){
if(s<position)
position=s;
temp=search(position);
temp2=temp->next;
temp->next=nowy;
nowy->next=temp2;
}
else{
nowy->next=nullptr;
first=nowy;}
  return size();
}

