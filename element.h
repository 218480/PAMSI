#ifndef guard_element
#define guard_element
/*element struktury listy lub jednej z jej owijek*/
class element
{
 public:
  int ele; /*dana liczba*/
  element *next=nullptr; /*wstaznik na nastepny element lub null jesli ostatni*/
  element(){}; 
};
#endif
