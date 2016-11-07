#include <iostream>

using namespace std;

int main()
{
    double rachunek, wplata, reszta;
    cout << "Kasa sklepowa " << endl;
    cout<<" Program oblicza reszte wymagana dla banknotu\n o okreslonym nominale przy danej cenie towaru"<<endl;
    cout<<"Podaj wartosc rachunku: ";
    cin>>rachunek;
    cout<<"Podaj wartosc wplaty: ";
    cin>>wplata;
    reszta = wplata - rachunek;
    cout<<"\nreszta "<<reszta;
    int zlotych = (int) reszta;
    cout<<"\nzlotych "<<zlotych;
    double grosze = reszta - zlotych;
    cout<<"\ngrosz "<<grosze;
    int k=0;
    while (grosze>0.5)
    {
        grosze=grosze-0.5;
        k++;
    }
    cout<<"\n50 gr. "<<k;
    int j=0;
    while (grosze>0.2)
    {
        grosze=grosze-0.2;
        j++;
    }
    cout<<"\n20 gr. "<<j;
    int n=0;
    while (grosze>0.1)
    {
        grosze=grosze-0.1;
        n++;
    }
    cout<<"\n10 gr. "<<n;
    int w=0;
    while (grosze>0.05)
    {
        grosze=grosze-0.05;
        w++;
    }
    cout<<"\n 5 gr. "<<w;
    int t=0;
    while (grosze>0.02)
    {
        grosze=grosze-0.02;
        t++;
    }
    cout<<"\n 2 gr. "<<t;
    int p=0;
    while (grosze>0.01)
    {
        grosze=grosze-0.01;
        p++;
    }
    cout<<"\n 1gr. "<<p;
    return 0;
}
