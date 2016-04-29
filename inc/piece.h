#ifndef guard_piece
#define guard_piece
class piece{
 public:
  bool red=0;
  int value=0;
piece *smaller=0, *bigger=0, *parent=0;;
};

#endif
