#ifndef guard_graph
#define guard_graph
#include "../inc/igraph.h"
class graph: public igraph
{
private:
  bool **macierz;
  int rozmiar=0;
  void enlarge();
 public:
  void add_vertex();
  void add_edge(int,int);
  int* get_neighbors(int);
  bool is_connected(int,int);
};

#endif
