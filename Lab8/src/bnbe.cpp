#include "../inc/bnbe.h"
#include "../inc/stack.h"
#include "../inc/wgraph.h"
#include <iostream>
bool bnbe::browse(wgraph g1,stack &p1, int clen, int lim, int target, bool temp[])
{
bool test=0;
  int top, ilosc, *tab;
  int i=0;
  top=p1.pop();
  p1.push(top);
  stack s1;
  s1 = g1.get_neighbors(top);
  ilosc=s1.size();
  tab = new int[ilosc];
  for(i=0;i<ilosc;i++){
    tab[i]=s1.pop();}
  stack p[ilosc];
int len[ilosc];
  for(i=0;i<ilosc;i++)
    {
      p[i]=p1;
      len[i]=clen+g1.weight(top,tab[i]);
    }
  for(i=0;i<ilosc;i++)
    {
      if(len[i]<=dist && tab[i]==target)
	{
	  lenght=len[i];
	  best=p[i];
	  test=1;
	  return test;
	}
    }
for(i=0;i<ilosc;i++){
      if(len[i]<dist && !test && !temp[tab[i]]){temp[tab[i]]=1; edges++; p[i].push(tab[i]); test=browse(g1,p[i],len[i], dist, target,temp);}
}
  return test;

}

stack bnbe::search(wgraph g1, int a, int b)
{
bool temp[g1.size()];
  stack p1;
int i,x;
for(i=0;i<g1.size();i++)
temp[i]=0;
p1.push(a);
while(!browse(g1, p1, 0, dist, b, temp)){x=p1.size(); edges=0;
for(i=0;i<g1.size();i++)
temp[i]=0; for(i=0;i<x;i++) p1.pop(); p1.push(a); dist++;}
return best;
}
