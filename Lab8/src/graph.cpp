#include "../inc/graph.h"
#include "../inc/stack.h"
void graph::enlarge()
{
  int i,j;
  bool **temp=new bool*[rozmiar+1];
  for(i=0;i<=rozmiar;i++)
      temp[i]=new bool[rozmiar+1];
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

void graph::add_vertex()
{
  if(rozmiar==0){
    macierz=new bool*[1];
    macierz[0]=new bool[1];
    rozmiar++;
    macierz[0][0]=0;
  }
  else
    enlarge();
}

void graph::add_edge(int x, int y)
{
  if(x<=rozmiar && y<=rozmiar)
    {
        macierz[x][y]=1;
	macierz[y][x]=1;
    }
  else 
    throw "out of range target for new edge!";
}

stack graph::get_neighbors(int x)
{
  stack s1;
  int i;
  if(x<rozmiar){
  for(i=0;i<rozmiar;i++)
    if(macierz[x][i]) s1.push(i);
  return s1;}
  else {throw "out of range target for get neighbors!"; }
}



bool graph::is_connected(int x, int y)
{
  if(x<=rozmiar && y<=rozmiar)
    {
      return macierz[x][y];
    }
  else 
    throw "out of range target for connection check";
  return 0;
}

void graph::test(int x)
{
int i;
  bool **temp=new bool*[x];
graph::add_vertex();
  for(i=0;i<x;i++)
      temp[i]=new bool[x];
      for(i=0;i<rozmiar;i++)
	delete [] macierz[i];
      delete [] macierz;
      macierz=temp;
rozmiar = x;
for(i=0;i<x-1;i++)
graph::add_edge(i,i+1);

}

