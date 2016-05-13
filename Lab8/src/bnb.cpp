#include "../inc/bnb.h"
#include "../inc/stack.h"
#include "../inc/wgraph.h"
void bnb::browse(wgraph g1,path p1, int target)
{
  int top=p1.s.pop();
  int i=0;
  p1.s.push(top);
  stack s1;
  s1 = g1.get_neighbors(top);
  int *tab, ilosc=s1.size();
  tab = new int[ilosc];
  for(i=0;i<ilosc;i++)
    tab[i]=s1.pop();
  path p[ilosc];
  for(i=0;i<ilosc;i++)
    {
      p[i].s=p1.s;
      p[i].len=p1.len+g1.weight(top,tab[i]);
      p[i].s.push(tab[i]);
    }
  for(i=0;i<ilosc;i++)
    {
      if(p[i].len<=dist && tab[i]==target)
	{
	  dist=p[i].len;
	  best=p[i];
	}
    }
  for(i=0;i<ilosc;i++)
    {
      if(p[i].len<dist) browse(g1,p[i],target);
    }

}

path bnb::search(wgraph g1, int a, int b)
{
  path p1;
  p1.s.push(a);
  browse(g1, p1, b);
}
