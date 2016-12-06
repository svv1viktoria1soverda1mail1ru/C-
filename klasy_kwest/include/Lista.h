#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <vector>
#include <fstream>
#include "Osoba.h"
using namespace std;

class Lista
{
public:
    Lista();
    void dodajDoListy();
    void wyswietlListe();
private:
    vector<Osoba*> listaOsob;

};
#endif
