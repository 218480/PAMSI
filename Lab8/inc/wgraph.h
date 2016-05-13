#ifndef guard_wgraph
#define guard_wgraph
#include "../inc/igraph.h"
#include "../inc/stack.h"
class wgraph: public igraph
{
private:
  int **macierz;
  int rozmiar=0;
  void enlarge();
  void add_edge(int,int);
 public:
  int weight(int,int); /*zmienic na private na koniec*/
  void test(int);
  int size(){return rozmiar;};
  void add_vertex();
  void add_edge(int,int,int);
  stack get_neighbors(int);
  bool is_connected(int,int);
};

#endif
