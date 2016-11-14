#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stack>
using namespace std;
string pobierzLiczbe()
{
    string liczba;
    cout << "Podaj liczbe do konwersji"<<endl;
    while(!(cin >> liczba))
    {
        cin.clear();
        cin.sync();
        cout << "Podaj liczbe, a nie napis ";
    }
    return liczba;
}
bool sprawdzPoprawnosc(int wjakimsystemiezapisana, string liczba)
{
    int dlugosc=liczba.size();
    bool wynik=true;
    int x;
    for(int i=0; i<dlugosc; i++)
    {
        if ((liczba[i]>='0') && (liczba[i]<='9'))
            x = liczba[i]-'0';
        else
            x = liczba[i]-55;
        if (x>=wjakimsystemiezapisana)
        {
            wynik=false;
            cout<<" Podana liczba jest zla. System "<<wjakimsystemiezapisana<<"-owy nie moze zawierac takiej cyfry "<<x<<endl;
            cout<<" Sprobuj ponownie. "<<endl;
            break;
        }
    }
    return wynik;
}
void zamienZDziesietnego(int system, int liczba10)
{
    stack < int > stosLiczb;
    while (!(liczba10==0))
    {
        stosLiczb.push(liczba10%system);
        liczba10=(int)((double)liczba10/(double)system);
    }
    cout << "Podana liczba w systemie "<<system<<"-owym wynosi ";
    while( stosLiczb.empty() == false )
    {
        if (stosLiczb.top()==10)
            cout<<"A";
        else if (stosLiczb.top()==11)
            cout<<"B";
        else if (stosLiczb.top()==12)
            cout<<"C";
        else if (stosLiczb.top()==13)
            cout<<"D";
        else if (stosLiczb.top()==14)
            cout<<"E";
        else if (stosLiczb.top()==15)
            cout<<"F";
        else
            cout << stosLiczb.top();
        stosLiczb.pop();
    }
}
int zamienNaDziesietny(string napis,int podstawa)
{
    int p = 1, wynik = 0, x;
    for (int i = napis.size()-1; i >= 0; i--)
    {
        if ((napis[i]>='0') && (napis[i]<='9'))
            x = napis[i]-'0';
        else
            x = napis[i]-55;
        wynik +=x*p;
        p *= podstawa;
    }
    cout<<"Liczba "<<napis<<" w systemie dziesietnym wynosi "<<wynik<<endl;;
    return wynik;
}
void wykonajDzialania(int opcja)
{
    bool dalej=true;
    string liczba=pobierzLiczbe();
    int liczba10,system;
    while (!(sprawdzPoprawnosc(opcja,liczba)))
    {
        liczba=pobierzLiczbe();
    }
    liczba10=zamienNaDziesietny(liczba,opcja);
    while (dalej)
    {
        cout << "Wybierz system, w ktorym chcesz otrzymac liczbe :\n2 - dwojkowy,\n3 - trojkowy,\n5 - piatkowy,\n8 - osemkowy,\n16 - szesnastkowy.\n" <<endl;
        while(!(cin >> system))
        {
            cin.clear();
            cin.sync();
            cout << "Podaj liczbe, a nie napis ";
        }
        if (system==2 || system==3 || system==5 || system==8 || system ==16)
        {
            zamienZDziesietnego( system, liczba10);
            dalej =false;
        }
        else
            cout<<"Nie ma takiej opcji. "<<endl;

    }
}
void info()
{
    cout << "\t\tProgram umozliwia konwersje liczb pomiedzy systemami liczbowymi 2,3,5,8 i 16.\t" << endl;
    cout << " Wpisane znaki nie bedace cyframi oraz literami A,B,C,D,E,F sa zle."<<endl;
    cout << "Program najpierw przelicza liczbe w system dziesietny,\n pozniej uzytkownik wybiera w jakim system konwertowac liczbe"<<endl;;

}
int main()
{
    info();
    while (true)
    {
        cout << "Wybierz system, w ktorym chcesz wprowadzic liczbe :\n2 - dwojkowy,\n3 - trojkowy,\n5 - piatkowy,\n8 - osemkowy,\n16 - szesnastkowy.\n" <<endl;
        int opcja;
        while(!(cin >> opcja))
        {
            cin.clear();
            cin.sync();
            cout << "Podaj liczbe, a nie napis ";
        }
        if (opcja==2 || opcja==3 || opcja==5 || opcja==8 || opcja ==16)
            wykonajDzialania(opcja);
        else
            cout<<"Nie ma takiej opcji "<<endl;
        cout<<"\n\n\nChcesz dokonac konwersji jeszcze raz? 1 - TAK, inny symbol - NIE"<<endl;
        int nast;
        while(!(cin >> nast))
        {
            cin.clear();
            cin.sync();
            cout << "Podaj liczbe, a nie napis ";
        }
        switch (nast)
        {
        case 1:
            break;
        default:
            exit(0);
            break;
        }
    }
    return 0;
}
