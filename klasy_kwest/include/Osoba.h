#include <iostream>
#include <vector>
#include <fstream>
#ifndef OSOBA_H
#define OSOBA_H
using namespace std;

class Osoba
{
public:
    Osoba();
    Osoba(string imie, string nazwisko, string email, string adres, string telefon);
    void dodajOsobe();
    void wyswietlOsobe();

private:
    string imie;
    string nazwisko;
    string email;
    string adres;
    string telefon;
};

#endif
