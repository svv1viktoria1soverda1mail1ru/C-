#include <iostream>
#include "Wektor.h"
using namespace std;

int main()
{
    Wektor *w=new Wektor(10);
    w->wyswietl();
    Wektor *w1;
    w1=w;
    w1->wyswietl();
    Wektor *w2=new Wektor(10,10);
    w2->wyswietl();
    w2->zmien(2,0);
    w2->wyswietl();
    w2->zwroc_wartosc(2);
    return 0;
}
