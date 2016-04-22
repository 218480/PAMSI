#include "tablicaasocjacyjna.h"
#include "stoper.h"
#include "pomiarta.h"
#include <string>
#include <iostream>

  double pomiarta::wykonaj_pomiar(int ilosc){
    tablicaasocjacyjna tab(300);
    int i=0,j=0;
    std::string nazwa="qwerty";
    static const char alph[] ="abcdefghijklmnopqrstuvwxyz";
    srand(time(nullptr));
    stoper s1;
    s1.start();
    for(i=0;i<ilosc;i++){
      for(j=0;j<6;j++)
        nazwa[j]=alph[rand() % (sizeof(alph)-1)];
      tab.dodaj(nazwa,i);}
    std::cout << "czas zapisu " << ilosc << "wartosci: "<< s1.stop() << std::endl;
tab.dodaj("kowalski",1);
s1.start();
std::cout<< "czas odczytu wartosci kowalski(" << tab["kowalski"] <<"): " << s1.stop() << std::endl;
return 0;
}
