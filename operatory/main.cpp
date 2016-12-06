#include <iostream>

using namespace std;

int main()
{

    //operatory arytmetyczne
    int a=5;
    int b=7;
    cout << a+b << endl;//dodawanie
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl;//dz z reszta
    cout<<endl;

    //operatory inkrementacji i dekrementacji
    int i=5;
    int j=5;
    int k=5;
    int l=5;
    cout<<i++<<endl;
    cout<<j--<<endl;
    cout<<++k<<endl;
    cout<<--l<<endl;
    cout<<endl;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<l<<endl;
    cout<<endl;

    //operatory logiczne
    int z1=4;
    int z2=8;
    cout<<(z1<z2)<<endl;
    cout<<(z1<=z2)<<endl;
    cout<<(z1>z2)<<endl;
    cout<<(z1>=z2)<<endl;
    cout<<(z1==z2)<<endl;
    cout<<(z1!=z2)<<endl;

    cout<<((z1==4) || (z2==2))<<endl;//alternatywa
    cout<<((z1==4) && (z2==8))<<endl;//koniunkcja
    cout<<!z1<<endl;//negacja

    //operatory bitowe
    short int b1=0x0f0;
    short int b2=0x0ff;
    short int w1,w2,w3,w4,w5;

    w1=b1<<2;//przesuniecie bitowe o 2 miejsca w lewo
    cout<<w1<<endl;

    w2=b1>>4;//przesuniecie bitowe o 4 miejsca w prawo
    cout<<w2<<endl;

    w3=b1&b2;//iloczyn bitowy
    cout<<w3<<endl;

    w4=b1 | b2;//suma bitowa;
    cout<<w4<<endl;

    w4= ~b1;//negacja bitow
    cout<<w4<<endl;

    w5=b1 ^ b2;//roznica sym (XOR) bitow
    cout<<w5<<endl;

    //pozostale operatory przypisania
    short int dz=12;
    cout<<(dz +=2)<<endl;//dz=dz+2
    cout<<(dz -=2)<<endl;//dz=dz-2
    cout<<(dz *=2)<<endl;//dz=dz*2
    cout<<(dz /=2)<<endl;//dz=dz/2
    cout<<(dz %=2)<<endl;//dz=dz%2
    cout<<(dz >>=2)<<endl;//dz=dz>>2
    cout<<(dz <<=2)<<endl;//dz=dz<<2
    cout<<(dz &=2)<<endl;//dz=dz&2
    cout<<(dz |=2)<<endl;//dz=dz|2
    cout<<(dz ^=2)<<endl;//dz=dz^2

    //wyrazenia warunkowe
    int m=5;
    cout<<((m>5) ? "Tak" : "Nie")<<endl;




    return 0;
}
