#include <iostream>
#include <vector>
#include <fstream>
#include "Lista.h"
using namespace std;
int main()
{
    Lista *lista = new Lista();
    cout<<"Program tworzy liste osob "<<endl;
    while (1)
    {
        cout<<"\n wybierz 'n' aby wprowadzic nowa osobe"<<endl;;
        cout<<"\n wybierz 'l' aby wydrukowac liste"<<endl;
        cout<<"\n wybierz 'q' aby zakonczyc program"<<endl;
        cout<<"\n wybor : "<<endl;
        char znak;
        cin>>znak;
        switch (znak)
        {
        case 'n' :
            lista->dodajDoListy();
            break;
        case 'l' :
            lista->wyswietlListe();
            break;
        case 'q' :
            return 0;
        default :
            cout<<"\n wprowadz tylko n,l lub q"<<endl;
        }
    }
    return 0;
}
