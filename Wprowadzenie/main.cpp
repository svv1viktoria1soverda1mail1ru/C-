#include <iostream>

using namespace std;

int main()
{
//strumien wyjsciowy
    cout << "Witaj!" << endl;
    string imie = "Darek";
    cout << "Witaj " <<imie<< endl;
    int wiek = 18;
    cout << "Masz " << wiek <<" lat."<<endl;//w c++ nie ma konwersji
//strumien wejsciowy
    int liczba;
    cout<<"Podaj swoja ulubiona liczbe: "<<endl;
    cin>>liczba;
    cout << "Twoja ulubiona liczba to " <<liczba<< endl;
//instrukcje sterujace
    int x;
    bool niepelnoletni;
    cout<<"Ile masz lat? "<<endl;
    cin>>x;
    niepelnoletni = (x <18);
    if (niepelnoletni==true)
        cout<<"Jestes niepelnoletni"<<endl;
    else
        cout<<"Jestes pelnoletni"<<endl;

//if...else
    int okres;
    if (niepelnoletni==true)
    {
        okres = 18 - x;
        cout<<"Jestes niepelnoletni"<<endl;
        if (okres==1)
            cout<<"Do pelnoletnosci zostal Ci "<<okres<<" rok."<<endl;
        else if ((okres>1) && (okres<5))
            cout<<"Do pelnoletnosci zostalo Ci "<<okres<<" lata."<<endl;
        else
            cout<<"Do pelnoletnosci zostalo Ci "<<okres<<" lat."<<endl;
    }
    else
        cout<<"Jestes pelnoletni"<<endl;

//while
    int org_x = x;
    while(niepelnoletni)
    {
        cout<<"Wiek: "<<x<<endl;
        x++;
        niepelnoletni = (x<18);
    }
    cout<<endl;

//do...while
    x = org_x;
    do
    {
        cout<<"Wiek: "<< x <<endl;
        x++;
        niepelnoletni = (x < 18);
    }
    while(niepelnoletni);
    cout<<endl;

//for
    for(int i=0; i < 10; i++)
        cout<< i <<endl;
    cout<<endl;

//for  with continue
    for(int i=0; i <10; i++)
    {
        if (i==5)
            continue;   //pominiecie, petla przechodzi dalej, mamy wszystko oprocz 5
        cout<<i<<endl;
    }
    cout<<endl;

//for with break
    for(int i=0; i <10; i++)
    {
        if (i==5)
            break;   //przerwanie petli w momencie gdy i==5
        cout<<i<<endl;
    }
    cout<<endl;

//switch
    int opcja = 1;
    switch (opcja)
    {
    case 1:
        cout<<"Wybrales pierwsza opcje. Wygrales 100 zl.";
        break;
    case 2:
        cout<<"Wybrales druga opcje. Wygrales 50 zl.";
        break;
    default:
        cout<<"Brak nagrod!!!";

    }
    return 0;
}
