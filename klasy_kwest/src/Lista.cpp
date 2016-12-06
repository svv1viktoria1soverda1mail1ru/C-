#include "Lista.h"



Lista::Lista() {}
void Lista::dodajDoListy()
{
    int ile;
    cout << "Ile osob chcesz dodac?\n";
    cin >> ile;
    for(int i = 0; i < ile; i++)
    {
        cout << "Wpisz dane dla " << i+1 << " osoby\n";
        Osoba *osoba = new Osoba();
        osoba->dodajOsobe();
        listaOsob.push_back(osoba);
    }
}
void Lista::wyswietlListe()
{
    if (listaOsob.size()!=0)
    {
        cout << "Lista:     \n";
        for (int i=0; i <listaOsob.size(); ++i)
        {
            cout << "\n" << i+1 << " osoba\n";
            listaOsob[i]->wyswietlOsobe();
            cout << "\n";
        }
    }
    else
    {
        cout<<" Lista jest pusta, zapisz kogos."<<endl;

    }
}
