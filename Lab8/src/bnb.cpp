#include "../inc/bnb.h"
#include "../inc/queue.h"
#include "../inc/wgraph.h"


int bnb::search(wgraph g1, int a, int b)
{
    edges = 0;
    int i;
    int dist=999999, size=g1.size(), next=0, prev=0, crt=0;
    queue node, son, value;

    node.push(a);
    son.push(a);
    value.push(0);

    while(node.size())
    {
	prev = node.pop();
	next = son.pop();
	crt = value.pop();
	for (i=0;i<size;++i)
	{
	    if((g1.weight(next,i)>0) && (i!=prev))
	    {
	        if(dist>crt)
	        {
	            edges++;
	            son.push(i);
	            value.push(g1.weight(i,next)+crt);
	            node.push(next);
		    if ((i==b) && (g1.weight(i,next)+crt<dist)) dist = crt+g1.weight(i,next);
	        }
	    }
	}
    }
    return edges;
}

int bnb::esearch(wgraph g1, int a, int b)
{
    edges=0;
    int i;
    int dist=999999, size=g1.size(), next=0, prev=0, crt=0;
    queue node, son, value;
    bool *visited;
    visited=new bool[size];
    for(i=0;i<size;i++) visited[i]=0;

    node.push(a);
    son.push(a);
    value.push(0);

    while(node.size())
    {
	prev = node.pop();
	visited[prev]=1;
	next = son.pop();
	crt = value.pop();
	for (i=0;i<size;++i)
	{
	    if((g1.weight(next,i)>0) && (!visited[i]))
	    {
	        if(dist>crt)
	        {
	            edges++;
	            son.push(i);
	            value.push(g1.weight(i,next)+crt);
	            node.push(next);
		    if ((i==b) && (g1.weight(i,next)+crt<dist)) dist = crt+g1.weight(i,next);
	        }
	    }
	}
    }
    return edges;
}
