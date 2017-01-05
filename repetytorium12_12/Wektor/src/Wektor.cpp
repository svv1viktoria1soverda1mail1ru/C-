#include "Wektor.h"
#include <cstdlib>
#include <ctime>
#include <cstring>
Wektor::Wektor()
{
    n=0;
    cout << "W konstruktorze domyslnym"  << endl;
}
Wektor::Wektor(int a)
{   cout << "W konstruktorze jednopar" << endl;
    n=a;
    tab=new int[n];
    srand( time( NULL ) );
    for (int i = 0; i<n; i++){
        tab[i]=rand() % n ;
    }
}
Wektor::Wektor(int a,int b)
{   cout << "W konstruktorze dwupar" << endl;
    n=a;
    tab=new int[n];
    for (int i = 0; i<n; i++){
        tab[i]=b;
    }
}
Wektor::Wektor(const Wektor& obiekt)
{   cout << "W konstruktorze kopiujacym" << endl;
    cerr<<"Konstruktor kopiujacy"<<endl;
    n = obiekt.n;
    if (sizeof(obiekt.tab)!=0){
    tab = new int[sizeof(obiekt.tab)+1];
    for (int i = 0; i<sizeof(obiekt.tab)+1; i++){
        tab[i]=obiekt.tab[i];
    }
    }

}
Wektor& Wektor::operator=(const Wektor& obiekt)
{
    if (this==&obiekt){

        return *this;
    }
    delete [] tab;
    tab=0;
    if (sizeof(obiekt.tab)!=0){
    tab = new int[sizeof(obiekt.tab)+1];
    for (int i = 0; i<sizeof(obiekt.tab)+1; i++){
        tab[i]=obiekt.tab[i];
    }
    }
    return *this;
}
Wektor::~Wektor()
{

}
void Wektor::wyswietl()
{
    for(int i = 0; i < n; i++)
    cout << tab[i]  << ", ";
    cout << endl;
}
void Wektor::zmien(int j,int k)
{
    for(int i = 0; i < n; i++){
        if (i==j){
            tab[i]=k;
        }
    }
}
int Wektor::zwroc_wartosc(int j)
{
    for(int i = 0; i < n; i++){
        if (i==j){
            cout <<"Wartosc elementu "<<j<<" wynosi "<<tab[i]<<endl;
        }
    }

}
