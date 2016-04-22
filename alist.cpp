#include "alist.h"
#include <cstdlib>
#include <ctime>
int alist::size()
{

  return rozmiar;
}

node* alist::search(int position){
node *test=first;
double s=size();
if(s<position)
position=s;
while (position>1){
test=test->next;
position--;
    }
return test;
}

void alist::remove(int position){
  node *temp;
  node *temp2;
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
rozmiar--;
  delete temp2;
  }
}

int alist::get(int position){
node *temp;
double s=size();
  if (s>=position)
  {
temp=search(position);
  return temp->value;
  }
  else return 0;
}


int alist::add(int numb, int position, std::string klucz){
  node *nowy;
nowy = new node;
  node *temp, *temp2;
  double s=size();
  nowy->value=numb;
  nowy->key=klucz;
/*if(s!=0){
if(s<position)
position=s;
temp=search(position);
temp2=temp->next;
temp->next=nowy;
nowy->next=temp2;
}
else{*/
nowy->next=0;
first=nowy;/*}*/
rozmiar++;
  return s+1;
}
void alist::fill(int ilosc){

srand(time(NULL));
node *nowy;
int i;
for(i=0;i<ilosc;i++){
nowy=new node;
nowy->value=std::rand();
nowy->next=first;
first=nowy;
rozmiar++;
}
}

