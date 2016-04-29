#ifndef guard_tree
#define guard_tree
#include "piece.h"
class tree
{
private:
  piece *root=0;
  void rotate_right(piece*);
  void rotate_left(piece*);
  piece* insert(int);
 public:
  void add(int);
  int find(int);

};

#endif
