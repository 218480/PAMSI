#include "../inc/tree.h"

piece* tree::insert(int wartosc){
  piece *nowy, *browser;
  bool found=0;
  nowy = new piece;
  nowy->value=wartosc;
  nowy->red=1;
  if(root==0) root=nowy;
  else{
    browser=root;
    while(!found)
      {
    if(wartosc<=browser->value)
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
	    if(browser->bigger!=0)
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
return nowy;
}

int tree::find(int wartosc){
  piece *browser;
  browser=root;
  while(browser!=0 && browser->value!=wartosc)
    {
    if(browser->value<wartosc)
      browser=browser->bigger;
    else
      browser=browser->smaller;
    }
  if(browser!=0)
  return browser->value;
  else return 0;
}

void tree::rotate_left(piece *element){
  piece *temp1=element->bigger;
element->bigger=temp1->smaller;
if(element->bigger!=0)
  element->bigger->parent=temp1;
temp1->parent=element->parent;
if(element->parent==0)
  root=temp1;
else if(element==element->parent->smaller)
  element->parent->smaller=temp1;
else
  element->parent->bigger=temp1;
temp1->smaller=element;
element->parent=temp1;

}

void tree::rotate_right(piece *element){
  piece *temp1=element->smaller;
element->smaller=temp1->bigger;
if(element->smaller!=0)
  element->smaller->parent=element;
temp1->parent = element->parent;
if(element->parent==0)
root=temp1;
else if(element==element->parent->smaller)
  element->parent->smaller = temp1;
else
  element->parent->bigger=temp1;
temp1->bigger=element;
element->parent=temp1;

}

void tree::add(int wartosc){
piece *nowy, *uncle, *p=0, *gp=0;
bool temp;
nowy=insert(wartosc);

if(nowy==root)
nowy->red=0;
while((nowy!=root) && (nowy->red==1) && (nowy->parent->red==1))
  {
p=nowy->parent;
gp=nowy->parent->parent;
  /*parent jest mniejszym synem*/
  if(p==gp->smaller)
    {
	uncle=gp->bigger;
	if(uncle!=0 && uncle->red==1)
	{
	    gp->red=1;
	    p->red=0;
	    uncle->red=0;
	    nowy = gp;
	}
	else
	{
	    if(nowy == p->bigger)
	    {
		rotate_left(p);
		nowy = p;
		p=p->parent;
	    }

		rotate_right(gp);
		temp=p->red;
		p->red=gp->red;
		gp->red=temp;
		nowy = p;
	}
    }
/*parent jest wiekszym synem*/
    else
    {
	uncle=gp->smaller;
	if((uncle!=0) && (uncle->red=1))
	{
	    gp->red=1;
	    p->red=0;
	    uncle->red=0;
	    nowy=gp;
	}
	else
	{
	    if(nowy==p->smaller)
	    {
		rotate_right(p);
		nowy=p;
		p=p->parent;
	    }
		rotate_left(gp);/**/
		temp=p->red;
		p->red=gp->red;
		gp->red=temp;
		nowy=p;
		p=p->parent;
	}
    }
  }

root->red=0;
}
