#ifndef guard_dfs
#define guard_dfs
#include "../inc/graph.h"
#include "../inc/stack.h"
class dfs
{
private:
bool visited(int*, int);
bool browse(graph, stack&, int*, int);
public:
stack search(graph, int, int);
};


#endif
