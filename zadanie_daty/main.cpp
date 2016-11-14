#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string tablica [5];
enum miesiac
{
    styczen = 1,
    luty = 2,
    marzec = 3,
    kwiecien =4,
    maj =5,
    czerwiec =6,
    lipiec=7,
    sierpien =8,
    wrzesien = 9,
    pazdziernik=10,
    listopad = 11,
    grudzien=12
};
enum lata
{
    rok
};
enum dzien_data
{
    data
};
enum dzien_tygodnia
{
    pon=1,
    wt = 2,
    sr=3,
    czw=4,
    pt = 5,
    sb = 6,
    nd =7
};

void sprawdzNapis3(int liczba)
{
    switch (liczba)
    {
    case styczen:
        tablica[2]="styczen";
        break;
    case luty:
        tablica[2]="luty";
        break;
    case marzec:
        tablica[2]="marzec";
        break;
    case kwiecien:
        tablica[2]="kwiecien";
        break;
    case maj:
        tablica[2]="maj";
        break;
    case czerwiec:
        tablica[2]="czerwiec";
        break;
    case lipiec:
        tablica[2]="lipiec";
        break;
    case sierpien:
        tablica[2]="sierpien";
        break;
    case wrzesien:
        tablica[2]="wrzesien";
        break;
    case pazdziernik:
        tablica[2]="pazdziernik";
        break;
    case listopad:
        tablica[2]="listopad";
        break;
    case grudzien:
        tablica[2]="grudzien";
        break;
    default:
        break;
    }
}
void sprawdzNapis(int liczba)
{
    switch (liczba)
    {
    case pon:
        tablica[0]="poniadzielek";
        break;
    case wt:
        tablica[0]="wtorek";
        break;
    case sr:
        tablica[0]="sroda";
        break;
    case czw:
        tablica[0]="czwartek";
        break;
    case pt:
        tablica[0]="piatek";
        break;
    case sb:
        tablica[0]="sobota";
        break;
    case nd:
        tablica[0]="niedziela";
        break;
    default:
        break;
    }
}

void sprawdzNapis2(int liczba3)
{
    string l;
    if (liczba3>=1 && liczba3<=30)
    {
        stringstream ss;
        ss << liczba3;
        l = ss.str();
        tablica[1]=l;
    }


}
void sprawdzNapis4(int liczba4)
{
    string l;
    stringstream ss;
    ss << liczba4;
    l = ss.str();
    tablica[3]=l;
}
int main()
{

    int liczba1=0,liczba2=0,liczba3=0,liczba4=0;
//   dzien_tygodnia dt;
//   miesiac m;
//   lata r;
    //  dzien_data d;
    cout<<"Podaj dzien tygodnia"<<endl;
    cin>>liczba1;
    sprawdzNapis(liczba1);

    cout<<"Podaj dzien date (od 1 do 31)"<<endl;
    cin>>liczba2;
    sprawdzNapis2(liczba2);

    cout<<"Podaj miesiac"<<endl;
    cin>>liczba3;
    sprawdzNapis3(liczba3);

    cout<<"Podaj rok"<<endl;
    cin>>liczba4;
    sprawdzNapis4(liczba4);


    cout<<"Podaj komentarz "<<endl;
    cin>>tablica[4];

    cout<<"W "<<tablica[0]<<" "<<tablica[1]<<" "<<tablica[2]<<" "<<tablica[3]<<" roku masz zrobic "<<tablica[4]<<endl;


}
