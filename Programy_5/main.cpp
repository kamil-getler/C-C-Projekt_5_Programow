#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    //Zmienne------------------------------------------------

    int first,second,czasH, czasM, czasS;
    double x, wynik;
    int wybor;
    float r, h, a, b, wyn, d, t,aa, bb, k, rad, wynikk;;


    //Belka Informacyjna--------------------------------------

    cout << "Kamil Getler 149532" << endl;
    cout << "Witam !" << endl;


    //Zadnaie NR.1------------------------------------------
    cout << "Zadanie NR.1." << endl;
    cout <<"Podaj x:";
    cin >> first;
    cout <<"Podaj y:";
    cin >> second;

    if (first>second){
         cout<< first <<" jest wieksze od " <<second<< endl;}
    else if (second>first){
         cout <<second <<" jest wieksze od" <<first << endl;}
    else{
         cout <<"Obie Liczby sa rowne"<< endl;}

    if (first%2==0){
        cout << "wpisana liczba jest parzysta" << endl;}
    else{
        cout << "wpisana liczba jest nieparzysta" << endl;}

    //Koniec Zadania1.1----------------------------------------------

    //Zadanie 1.2----------------------------------------------------

    cout << "Zadanie NR.1.2. Obliczanie wartosci funkcji" << endl;

    cout<<"Podaj argument x: "<< endl;
    cin >> x;

    if(x >= 1 && x <= 10) {
        wynik = sin(M_PI * x * M_PI / 180) + 1;
    } else if (x > 10 && x <= 20) {
        wynik = sqrt(x);
    } else {
        wynik = (x*x/3) + x + 2;
    }

    cout <<"y(x) dla x= " << x << " wynosi: "<< wynik << endl;

    //Koniec zadania1.2-------------------------------------------

    //Zadanie 1.3-------------------------------------------------
    cout << "Zadanie NR.3" << endl;
    cout<<("Co chcesz obliczyc?\n1. Objetosc kuli\n2. Objetosc stozka\n3. Pole prostokata\n")<<endl;
    cin >> wybor;

    switch(wybor) {
        case 1:
            cout<<("Podaj promien kuli: ")<<endl;
            cin >> r;
            wyn = (4*M_PI/3*pow(r, 3));
            cout<<"Objetosc = "<< wyn <<endl;
        break;
        case 2:
            cout<<("Podaj promien podstawy: ")<<endl;
            cin >> r;
            cout<<("Podaj wysokosc stozka: ")<<endl;
            cin >> h;
            wyn = (M_PI * (r*r) * h) / 3;
            cout<<"Objetosc = " <<wyn<<endl;
        break;
        case 3:
            cout<<("Podaj dlugosc boku a: ")<<endl;
            cin >> a;
            cout<<("Podaj dlugosc boku b: ")<<endl;
            cin >> b;
            wyn = a * b;
            cout <<"Pole = "<<wyn<<endl;
        break;
        default: "Nie ma takiej opcji!";


    //Zadanie 1.3-------------------------------------------

    cout<< "Zadanie NR.3" << endl;
    cout<<("Podaj kolejno po spacji dlugosc boku a i b oraz miare kata pomiedzy nimi: ")<<endl;
    cin >> aa >> bb >> k;
    if(k >= 180 || k <= 0) {
         cout<<("Taki trojkat nie moze istniec!")<<endl;
    } else {
        rad = k * M_PI / 180;
        wynik = (aa * bb * sinf(rad)) / 2;
         cout<<("Pole trojkata wynosi %f.", wynikk)<<endl;
    }
}
    //Zadanie 1.4---------------------------------------------
    cout << "Zadanie NR.4" << endl;
    cout <<("Podaj dlugosc drogi w km: ")<< endl;
    cin >> d;
    d *= 1000;
    t = (0.2*d) / 10 + (0.5*d) / 8 + (0.3*d) / 5;
    czasH = t / 3600;
    czasM = (t - czasH * 3600) / 60;
    czasS = t - czasH * 3600 - czasM * 60;
    printf("Czas jazdy: %d godzin %d minut %d sekund.", czasH, czasM, czasS);




    return 0;
}
