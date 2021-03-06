#include "../inc/wgraph.h"
#include "../inc/stack.h"
void wgraph::enlarge()
{
  int i,j;
  int **temp=new int*[rozmiar+1];
  for(i=0;i<=rozmiar;i++)
      temp[i]=new int[rozmiar+1];
  for(i=0;i<rozmiar;i++){
	for(j=0;j<rozmiar;j++)
            temp[i][j]=macierz[i][j];
        }
      for(i=0;i<=rozmiar;i++)
	{
	  temp[i][rozmiar]=0;
	  temp[rozmiar][i]=0;
	}
      for(i=0;i<rozmiar;i++)
	delete [] macierz[i];
      delete [] macierz;
      rozmiar++;
      macierz=temp;
}

void wgraph::add_vertex()
{
  if(rozmiar==0){
    macierz=new int*[1];
    macierz[0]=new int[1];
    rozmiar++;
    macierz[0][0]=0;
  }
  else
    enlarge();
}

void wgraph::add_edge(int x, int y, int w)
{
  if(x<=rozmiar && y<=rozmiar)
    {
        macierz[x][y]=w;
	macierz[y][x]=w;
    }
  else 
    throw "out of range target for new edge!";
}

void wgraph::add_edge(int x, int y)
{
  add_edge(x,y,1);
}

stack wgraph::get_neighbors(int x)
{
  stack s1;
  int i;
  if(x<rozmiar){
  for(i=0;i<rozmiar;i++)
    if(macierz[x][i]) s1.push(i);
  return s1;}
  else {throw "out of range target for get neighbors!"; }
}



bool wgraph::is_connected(int x, int y)
{
  if(x<=rozmiar && y<=rozmiar)
    {
      if(macierz[x][y]!=0)
      return 1;
      else
	return 0;
    }
  else 
    throw "out of range target for connection check";
  return 0;
}

void wgraph::test(int x)
{
int i;
  int **temp=new int*[x];
wgraph::add_vertex();
  for(i=0;i<x;i++)
      temp[i]=new int[x];
      for(i=0;i<rozmiar;i++)
	delete [] macierz[i];
      delete [] macierz;
      macierz=temp;
rozmiar = x;
for(i=0;i<x-1;i++)
  wgraph::add_edge(i,i+1,1);

}

int wgraph::weight(int x, int y)
{
  return macierz[x][y];
}


