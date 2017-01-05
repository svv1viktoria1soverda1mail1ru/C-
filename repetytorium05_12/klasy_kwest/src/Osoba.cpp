#include <iostream>
#include <vector>
#include <fstream>
#include "Osoba.h"
Osoba::Osoba(){}
Osoba::Osoba(string imie, string nazwisko, string email, string adres, string telefon)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->email = email;
        this->adres = adres;
        this->telefon = telefon;
    }
 void Osoba::dodajOsobe()
    {
        cout << "Podaj imie\n";
        cin >> this->imie;
        cout << "Podaj nazwisko\n";
        cin >> this->nazwisko;
        cout << "Podaj email\n";
        cin >> this->email;
        cout << "Podaj adres\n";
        cin >> this->adres;
        cout << "Podaj numer telefonu\n";
        cin >> this->telefon;
        cout << "\n";
    }
void Osoba::wyswietlOsobe()
    {
        cout << "Imie: " << this->imie<<endl;
        cout <<"Nazwisko: " << this->nazwisko <<endl;
        cout <<"Email: " << this->email<<endl;
        cout <<"Adres: " << this->adres<<endl;
        cout <<"Telefon: " << this->telefon<<endl;
    }
