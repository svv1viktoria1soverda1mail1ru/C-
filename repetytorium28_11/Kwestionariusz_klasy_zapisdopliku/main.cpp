#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
class Osoba
{
public:
    Osoba() {}
    Osoba(string imie, string nazwisko, string email, string adres, string telefon)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->email = email;
        this->adres = adres;
        this->telefon = telefon;
    }
    void dodajOsobe()
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
        this->zapiszOsobe();
    }
    void wyswietlOsobe()
    {
        cout << "Imie: " << this->imie<<endl;
        cout <<"Nazwisko: " << this->nazwisko <<endl;
        cout <<"Email: " << this->email<<endl;
        cout <<"Adres: " << this->adres<<endl;
        cout <<"Telefon: " << this->telefon<<endl;
    }
private:
    string imie;
    string nazwisko;
    string email;
    string adres;
    string telefon;
    void zapiszOsobe() {
       fstream f;
       f.open("osoby.txt", ios::app);
       if(f.is_open()) {
            f << this->imie<< "\n";
            f << this->nazwisko<< "\n";
            f << this->email<< "\n";
            f << this->adres<< "\n";
            f << this->telefon << "\n";
            f << "\n";
            f.close();
       } else {
            cout << "B��d zapisu!";
       }
    }
};
class ZapisDanych
{

public:
    vector<Osoba*> listaOsob;

     void dodajDoListy(){};
   void wyswietlListe(){};


};
class Lista: public ZapisDanych
{
public:

    Lista():ZapisDanych() {}
    void dodajDoListy()
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
    void wyswietlListe()
    {
        if (listaOsob.size()!=0)
        {
            cout << "Lista:\n";
            for (int i=0; i <listaOsob.size(); ++i)
            {
                cout << "\n" << i+1 << ". osoba:\n";
                listaOsob[i]->wyswietlOsobe();
                cout << "\n";
            }
        }
        else
        {
            cout<<" Lista jest pusta, zapisz kogos."<<endl;

        }
    }


};
class Plik:public ZapisDanych
{
public:
    Plik():ZapisDanych()
    {
    }
    void sprawdzZawartosc()
    {
        fstream f;
        f.open("osoby.txt",ios::in);

        string imie,nazwisko,email,adres,telefon;
        if(f.is_open())
        {
            while(!f.eof())
            {
                f >> imie;
                f >> nazwisko;
                f >> email;
                f >> adres;
                f >> telefon;
                Osoba *osoba = new Osoba(imie,nazwisko,email,adres,telefon);

                   listaOsob.push_back(osoba);
                   cout<<"yyy"<<imie<<nazwisko<<email<<adres<<telefon<<endl;
            }
        }
    }
};
int main()
{

    Lista *lista = new Lista();
    Plik *plik=new Plik();
    plik->sprawdzZawartosc();
    cout<<"Program tworzy liste osob"<<endl;
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
