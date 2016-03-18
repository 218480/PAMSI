#include "stoper.h"
#include <time.h>

void stoper::start(){
  t_poczatkowe=clock();
}
double stoper::stop(){
  return (clock()-t_poczatkowe)*1000/CLOCKS_PER_SEC;
}
