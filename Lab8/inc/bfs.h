#ifndef guard_bfs
#define guard_bfs
#include "../inc/graph.h"
#include "../inc/queue.h"
class bfs
{
private:
int dist=1;
bool visited(int*, int);
bool browse(graph, int, stack&, int*, int);
public:
stack search(graph, int, int);
};


#endif
