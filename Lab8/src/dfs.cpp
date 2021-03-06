#include "../inc/dfs.h"

bool dfs::visited(int *tab, int value)
{
if(tab[value]==1) return 1;
else return 0;
}

bool dfs::browse(graph g1, stack &current, int *tab, int target)
{
stack n1;
bool f=0;
int i=0, len, crt=current.pop();
n1=g1.get_neighbors(crt);
len=n1.size();
int temp[len];
for(i=0;i<len;i++)
temp[i]=n1.pop();
if(!g1.is_connected(crt, target)){
i=0;
while(i<len && f==0)
    {
	if(tab[temp[i]]==0)
	{
	    current.push(crt);
	    current.push(temp[i]);
	    tab[temp[i]]=1;
	    f=dfs::browse(g1, current, tab, target);
	    if(f) return 1;
	}
	i++;
    }

}
else
    {
	current.push(crt);
	current.push(target);
	return 1;
    }
return 0;
}

stack dfs::search(graph g1, int start, int target)
{
stack s1;
int i, s=g1.size(), tab[s], *temp;
s1.push(start);
for(i=0;i<s;i++)
tab[i]=0;
if(dfs::browse(g1, s1, tab, target))
    {
	return s1;
    }
else throw "elements not connected";
}
