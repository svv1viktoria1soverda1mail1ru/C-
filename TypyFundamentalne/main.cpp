#include <iostream>

using namespace std;

int main()
{
    //typy fundamentalne
    //liczby calkowite
    short int a1;//short
    int a2;
    long int a3;//long

    //typ do przechowywania znakow alfanumerycznych
    char b;

    //ze znakiem i bez znaku
    signed int c1;//int e;
    unsigned int c2;

    //typy reprezentujace liczby zmiennoprzecinkowe
    float e1;
    double e2;
    long double e3;

    //typ logiczny
    bool f;

    //stale
    //stale liczbowe
  //  system dziesietny
    int dz=10;
    //system osemkowy
    int o=010;
    //system szesnastkowy
    int h=0x10;

    //liczba typu long
    cout<<20L<<endl;
     //liczba typu unsigned
    cout<<20u<<endl;
      //liczba typu unsigned long
    cout<<20uL<<endl;
    //stale reprezentujace liczby zmiennoprzecinkowe
    cout<<12.3<<endl;
    //notacja wykladnicza e
    double ne = 4e5;
    float zm = 4.5f;//4.5F
    //stale znakowe
    char znak = 'c';
    //stale znakowe typu wchar_t
    wchar_t litera = L'a';//L'jakas litera np z innego alfabetu'
    cout<<litera<<endl;
    //stale tekstowe
    string napis = "Ala ma kota";

    //typy zlozone

    //tablice
    int tab[10];

    //wskazniki
    float *p;

    //funkcje
    int wylicz();

    //przydomek const
    const double pi = 3.14;

    //przydomek register
    register int i;//info dla kompilatora by przechowywal ta zmienna
                   //w rejestrze (szybki dostep do zmiennej)
    //przydomek volatile
    volatile int m;//kompilator ma uwazac na ta zmienna (obiekt)
                   //z uwagi na jej zmienny charakter
    //instrukcja typedef
    typedef int cena;//nadanie dodatkowej nazwy zmiennej
    cena x;

    //typy wyliczeniowe enum
    enum miesiac
    {

        styczen = 0,
        luty = 1,
        marzec = 2
    };
    miesiac miech;
    miech = styczen;
    cout<<miech<<endl;

    return 0;
}
