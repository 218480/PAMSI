#ifndef guard_interface
#define guard_interface
class interface
{
public:
/*przyjmuje ilosc dodatnia elementow jako rozmiar porblemu i zwraca usredniony czas dzialania z 10 pomiarow*/
  virtual double wykonaj_pomiar(int ilosc) = 0;
};
#endif
