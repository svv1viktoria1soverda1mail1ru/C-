#include <iostream>

using namespace std;

int main()
{
    //tablice jednowymiarowe
    int *tab;
    tab = new int[10];
    delete tab;//likwidacja tablicy;

    //tablice wielowymiatowe
    //int *tab1;
    int ile;
    ile=5;
    int (*tab1) [10]= new int [ile][10];//tylko wymiar "najbardziej z prawej moze byc dynamiczny
    delete tab1;
    return 0;
}
