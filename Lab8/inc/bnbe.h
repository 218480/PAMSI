#ifndef guard_bnbe
#define guard_bnbe
#include "../inc/wgraph.h"
#include "../inc/path.h"
class bnbe
{
private:
  int dist=1;
  stack best;
  bool browse(wgraph, stack&, int, int, int,bool[]);
public:
int lenght,edges=0;
  stack search(wgraph, int, int);
};


#endif
