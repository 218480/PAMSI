#ifndef guard_bnb
#define guard_bnb
#include "../inc/wgraph.h"
#include "../inc/path.h"
class bnb
{
private:
  int dist=1;
  stack best;
  bool browse(wgraph, stack&, int, int, int);
public:
int lenght,edges=0;
  stack search(wgraph, int, int);
};


#endif
