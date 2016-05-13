#include "../inc/tree.h"
#include "../inc/stoper.h"
#include "../inc/pomiardrzewa.h"
#include <iostream>

  double pomiardrzewa::wykonaj_pomiar(int ilosc){
    tree t1;
    int i=0,j=0;
double czas;
    srand(time(nullptr));
    stoper s1;
   /* s1.start();*/
    for(i=0;i<ilosc-1;i++)
        t1.add(rand());
    t1.add(7);/*
    std::cout << "czas zapisu " << ilosc << "wartosci: "<< s1.stop() << std::endl;
   */ s1.start();
    t1.find(7);/*
    std::cout<<s1.stop()<<std::endl;*/
return s1.stop();
}
