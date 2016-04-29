#include <iostream>
#include "../inc/tablica.h"
#include "../inc/stoper.h"
#include "../inc/pomiartablicy.h"
#include "../inc/pomiarlisty.h"
#include "../inc/stack.h"
#include "../inc/list.h"
#include "../inc/queue.h"
#include "../inc/tablicaasocjacyjna.h"
#include "../inc/pomiarta.h"
#include "../inc/tree.h"
#include "../inc/pomiardrzewa.h"
#include "../inc/graph.h"

using namespace std;
int main(){
  graph g1;
  g1.add_vertex();
  g1.add_vertex();
  if(g1.is_connected(0,1)) cout<<"a "<<endl;
  g1.add_edge(0,1);
  if(g1.is_connected(0,1)) cout<<"b "<<endl;

  return 0;
};
