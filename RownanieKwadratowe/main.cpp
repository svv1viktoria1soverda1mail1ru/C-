#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c;
    double x1,x;
    double x2;
    cout << "Podaj parametry rownania kwadratowego" << endl;
    cout<<"Podaj a: "<<endl;
    cin>>a;
    cout<<"Podaj b: "<<endl;
    cin>>b;
    cout<<"Podaj c: "<<endl;
    cin>>c;
    cout<<"Twoje rownanie "<<a<<"x^2+"<<b<<"x+"<<c<<"=0";
    double delta = b*b-4*a*c;
    cout<<"\nDelta wynosi: "<<delta;
    if (delta<0)
    {
        cout<<"\nBrak pierwiastkow"<<endl;
    }
    else if (delta==0)
    {
        x=(-b)/(2*a);
        cout<<"\nMamy jeden pierwiastek x="<<x<<endl;
    }
    else if (delta>0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<"\n Mamy dwa pierwiastki\nx1="<<x1<<endl;
        cout<<"\nx2="<<x2<<endl;
    }
    int opcja;
    cout<<"Chcesz sprawdzic? Wpisz 1 - Tak lub 2 - Nie."<<endl;
    cin>>opcja;
    switch (opcja)
    {
    case 1:
        if (delta==0)
            cout<<"\nSprawdzenie a*x*x+b*x+c = "<<a*x*x+b*x+c;
        else
        {
            cout<<"\nSprawdzenie a*x1*x1+b*x1+c = "<<a*x1*x1+b*x1+c;
            cout<<"\nSprawdzenie a*x2*x2+b*x2+c = "<<a*x2*x2+b*x2+c;
        }
        break;
    case 2:
        break;
    default:
         cout<<"Blad";
    }
    return 0;
}
