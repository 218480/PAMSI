#include "../inc/bfs.h"
#include <iostream>

bool bfs::visited(int *tab, int value)
{
if(tab[value]==1) return 1;
else return 0;
}

bool bfs::browse(graph g1, int crt, stack &current, int *tab, int target)
{
stack n1, n2;
bool f=0;
int i=0,j=0, len, ssd, len2;
n1=g1.get_neighbors(crt);
len=n1.size();
int *temp, *temp2;
temp= new int[len];
while(dist<=g1.size())
{
for(i=0;i<len;i++){
temp[i]=n1.pop(); tab[temp[i]]=1;}
for(i=0;i<len;i++)
if(temp[i]==target) {
current.push(temp[i]);
n2=g1.get_neighbors(target);
len2=n2.size();
temp2=new int [len2];
for(i=0;i<len2;i++)
temp2[i]=n2.pop();
for(i=0;i<len2;i++)
if(tab[temp2[i]]==1) ssd=temp2[i];
for(i=0;i<g1.size();i++)
tab[i]=0;
 bfs::browse(g1, crt, current, tab, ssd);
return 1;
}
else
{
for(i=0;i<len;i++)
{
n2=g1.get_neighbors(temp[i]);
for(j=0;j<n2.size();j++) n1.push(n2.pop());
}
delete [] temp;
temp = new int[n1.size()];
}
dist++;
}
}

stack bfs::search(graph g1, int start, int target)
{
stack s1;
int i, s=g1.size(), tab[s], *temp;
for(i=0;i<s;i++)
tab[i]=0;
if(bfs::browse(g1, start, s1, tab, target))
    {
	return s1;
    }
else throw "elements not connected";
}
