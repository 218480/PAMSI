#ifndef guard_stoper
#define guard_stoper
/*mierzy czas dzialania pomiedzy dwoma punktami*/
class stoper
{
  double t_poczatkowe=0;
 public:
  void start(); /*rozpoczyna pomiar*/
  double stop(); /*zwraca czas pomiaru*/
};

#endif
