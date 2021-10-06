#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
////Zrobilem co umialem :)
////Poprawiłem kod gra jest na jednego gracza.Gra sie konczy gry gracz ma 0 punktow.
////Testowalem gry zarowno przegran jak wygrana dzialaja dorbrze
////Wyzerowanie konta skutkuje opuszczeniem gry
////Gra dziala plynnie mozna by ja urozmaicic jakims licznikiem symulujacym rzut kostki


void dalej ();
void kostka ();
void zasady ();
void koniec();
int grajdalej();
int liczbaoczek();

int suma;//Mam tylko
int GRACZ=100;

using namespace std;

void koniec()
{
  cout<<"XXXXXXXXXX"<<endl;
  cout<<"XXXXXXXXXX"<<endl;
  cout<<"KONIEC GRY"<<endl;
  exit (0);
}

int rzut1()///Poprawiłem zrobiłem jedną funkcje do rzucania kostek
{
    Sleep(800);///zastosowalem slepp ponieważ ładnie wyglada mała pałza przy wypisywaniu w terminalu i
    /// pozwala na wylosowaniu roznych liczb
    srand (time(NULL));
    int rzut=((rand()%6)+1);
    cout << "Kostka " <<    rzut << endl;
    return rzut;
}


int liczbaoczek() ///Pierwszy rzut
{
int rzut=rzut1 ();
int rzutTWO=rzut1 ();
kostka ();
 suma=rzut+rzutTWO;
    if (suma==11,suma==7)
{
            cout<<"Wygrana"<<endl;
            for(int i=0; i==10;i++)
            {
                Sleep(100);
                cout<<"1+"<<endl;
            }
            cout<<"Wygrana"<<endl;
            GRACZ=GRACZ+10 ;
            cout<<"Grasz dalej? Czy konczysz z suma  "<<GRACZ<<"ZL"<<endl;
            dalej ();
}
    else
         if(suma==2,rzut+rzutTWO==3,suma==12)
{
           cout<<"Przegrana"<<endl;
           for(int i=0; i<=15;i++)
            {
                Sleep(100);
                cout<<"1-"<<endl;
            }
           GRACZ=GRACZ-15 ;
          cout<<"Grasz dalej? Czy konczysz z suma  "<<GRACZ<<"ZL"<<endl;
          if(GRACZ<=0)
          {
          cout<<"Nie masz juz srodkow do gry"<<GRACZ<<"ZL"<<endl;
          koniec();
           }
          dalej ();
}
         if(suma==4||suma==5||suma==6||suma==8||suma==9||suma==10)
{

        cout<<"==================================================="<<endl;
        cout<<"Rzucaj Dalej<-------------------------------"<<endl;
         cout<<"<------------------------------------------>"<<endl;
        cout<<"Wyrzuc sume rowna:  "<<suma<<endl;
        cout<<"WYRZUCISZ SUME -----7----- PRZEGRYWASZ"<<endl;
         grajdalej();
}
   return suma;
}

int grajdalej()///Drugirzut
{
int suma2;

 while (suma2!=suma&&suma2!=7)
    {
        kostka ();
        Sleep(500);

int rzut=rzut1 ();
int rzutTWO=rzut1 ();
suma2=rzut+rzutTWO;


cout<<"Twoj cel to suma rowna:"<<suma<<"         "<<"Twoja wyrzucona suma to:"<<suma2<<endl;
cout<<"Rzucaj dalej az suma punktow bedzie jak za pierwszym rzutem!!! Uwazaj na liczbe 7:)"<<endl;
cout<<"                                                     "<<endl;
 Sleep(800);
    }
     if (suma2==7)
     {
        cout <<"Przegrana"<<endl;

        for(int i=0; i<=15;i++)
            {
                Sleep(100);
                cout<<"1-"<<endl;
            }
        GRACZ=GRACZ-15 ;
        if(GRACZ<=0)
        {
        cout<<"Nie masz juz srodkow do gry"<<GRACZ<<"ZL"<<endl;
        koniec();
           }
        cout<<"Grasz dalej? Czy konczysz z suma  "<<GRACZ<<"ZL"<<endl;
        dalej ();
     }
 else{
        cout <<"Wygrana"<<endl;
        for(int i=0; i<=10;i++)
            {
                Sleep(100);
                cout<<"1+"<<endl;
            }
        GRACZ=GRACZ+10 ;
        cout<<"Grasz dalej? Czy konczysz z suma  "<<GRACZ<<"ZL"<<endl;

        dalej ();
 }


return 0;
}
void dalej ()
{
int cyfra;

    cout << "                 "<<endl;
    cout << "Podaj liczbe:"<<endl;
    cout << "1.RZUCJA DALEJ"<<endl;
    cout << "2.Koniec Gry"<<endl;

    cin >> cyfra;

    switch( cyfra )
    {
        case (1):
        liczbaoczek();
        break;
       case(2):
        cout << "Twoja kasa to:  "<<GRACZ<<endl;
        exit (0);
        default:
        cout << "prosze wybrac ponownie\n";
        break;
}
}
void kostka ()
{
     cout <<" ------- "<<endl;
     cout <<"| O   O |" <<endl;
     cout <<"|   O   | "<<endl;
     cout <<"| O   O |"<<endl;
    cout << " -------"<<endl;

}
void zasady ()
{
     cout << "GRACZ rzuca dwie kosci. Kazda z nich ma 6 scianek. Kiedy kosci zostaja rzucone, obliczana jest suma"<<endl;
     cout <<"punktow. Jezeli przy pierwszym rzucie suma wynosi 7 lub 11 GRACZ wygrywa. Jesli suma wynosi "<<endl;
     cout <<"pierwszym rzucie 2, 3 lub 12 GRACZ przegrywa. Jezeli suma wynosi 4, 5, 6, 8, 9 lub 10 przy" <<endl;
     cout <<"rzucie, gra jest nierozstrzygnieta, a suma staje sie punktami GRACZa." <<endl;
     cout << "GRACZ na początku ma 100 zł, każda wygrana to uzyskane 10 zł, przegrana trzeba oddać 15 zł. Gra"<<endl;
    cout << "konczy sie, kiedy GRACZ nie ma pieniedzy, albo rezygnuje z gry. "<<endl;
     system("pause");
}

int main()
{
    int liczba;
     cout << "-----Witaj w grze---"<<endl;
     cout << "--------KOSCI-------"<<endl;
     cout << "******--------******"<<endl;

    cout << "GRACZ 1."<<endl;
    cout << "Podaj liczbe:"<<endl;
    cout << "1.RZUCJA"<<endl;
    cout << "2.Zasady"<<endl;
    cout << "3.Exit"<<endl;
    cin >> liczba;
    switch( liczba )
    {
    case (1):
        liczbaoczek();
        break;
        case (2):
         zasady();
        break;
    case(3):
        exit (0);
        default:
        cout << "prosze wybrac ponownie\n";
        break;

}
return 0;
}
