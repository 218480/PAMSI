#include "tree.h"

void tree::add(int wartosc){
  piece *nowy, *browser;
  bool found=0;
  nowy = new piece;
  nowy->value=wartosc;
  if(root==0) root=nowy;
  else{
    browser=root;
    while(!found)
      {
    if(wartosc<browser->value)
          {
	    if(browser->smaller!=0)
	      browser=browser->smaller;
	    else
              {
	        found=1;
	        browser->smaller=nowy;
		nowy->parent=browser;
	      }
          }
    else
          {
	    if(browser->bigger!==0)
	      browser=browser->bigger;
	    else
	      {
		found=1;
		browser->bigger=nowy;
		nowy->parent=browser;
	      }
          }
      }
  }

}

int tree::find(wartosc){
  piece *browser;
  browser=root;
  while(browser->value!=wartosc)
    {
    if(browser->value<wartosc)
      browser=browser->bigger;
    else
      browser=browser->smaller;
    }
  return browser->value;

}

void tree::rotate_left(piece *element){
  piece *temp1, *temp2;
  temp1=element->bigger;
  if(element->parent=0)
    {
      root=temp1;
      element->bigger=temp1->smaller;
      temp1->smaller=element;
    }
  else
    {
      if(element->parent->smaller=element)
	element->parent->smaller=temp1;
      else
	element->parent->bigger=temp1;
      element->parent=temp1;
      element->bigger=temp1->smaller;
      temp1->smaller=element;
    }
}

void tree::rotate_right(piece *element){
  piece *temp1;
  temp1=element->smaller;
  if(element->parent=0)
    {
      root=temp1;
      element->smaller=temp1->bigger;
      temp1->bigger=element;
    }
  else
    {
      if(element->parent->bigger=element)
	element->parent->bigger=temp1;
      else
	element->parent->smaller=temp1;
      element->parent=temp1;
      element->smaller=temp1->bigger;
      temp1->bigger=element;
    }
}
