#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    int x,y;

    cout << "Kamil Getler 149532" << endl;
    cout << "Witam !" << endl;
    cout << "Zadanie NR.1" << endl;

    cout <<"Podaj x:";
    cin >> x;
    cout <<"Podaj y:";
    cin >> y;

    if (x>y)
         cout<< x <<" jest wieksze od " <<y << endl;
    else if (y>x)
         cout <<y <<" jest wieksze od" <<x << endl;
    else
         cout <<"Obie Liczby sa rowne"<< endl;

    if (x%2==0)
        cout << "wpisana liczba jest parzysta" << endl;
    else
        cout << "wpisana liczba jest nieparzysta" << endl;

    return 0;
}
