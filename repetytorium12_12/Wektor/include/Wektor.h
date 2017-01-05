#ifndef WEKTOR_H
#define WEKTOR_H
#include <iostream>
using namespace std;
class Wektor
{
    public:
        Wektor ();
        Wektor (int a);
        Wektor (int a,int b);
        Wektor (const Wektor&);
        ~Wektor();
        void wyswietl();
        void zmien(int j,int k);
        int zwroc_wartosc(int j);
        Wektor& operator=(const Wektor&);
    protected:

    private:
        int n;
        int *tab;
};

#endif // WEKTOR_H
