#ifndef guard_igraph
#define guard_igraph
/*interface graph*/
class igraph
{
 public:
  virtual void add_vertex()=0;
  virtual void add_edge(int, int)=0;
  virtual int* get_neighbors(int)=0;
  virtual bool is_connected(int,int)=0;
};
#endif
