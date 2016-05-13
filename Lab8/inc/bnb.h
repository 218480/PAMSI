#ifndef guard_bnb
#define guard_bnb
#include "../inc/wgraph.h"
#include "../inc/path.h"
class bnb
{
private:
  int dist=32000;
  path best;
  void browse(wgraph, path, int);
public:
  path search(wgraph, int, int);
};


#endif
