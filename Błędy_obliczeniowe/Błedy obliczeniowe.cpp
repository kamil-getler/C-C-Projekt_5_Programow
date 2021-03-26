#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
    //Petla float
    for (float i=700; i!=701;i=i+0.001)
    {
    cout <<fixed<<setprecision(20) << i<<endl;
    }
    //Petla dauble z EPS

    const double EPS = 0.00001;
    //ε - akceptowalne przybliżenie

    for (double i=800; (fabs(801 - i) > EPS );i=i+0.001)
    {
    cout <<fixed<<setprecision(20) << i<<endl;
    }

    //Petla double

    for (double i=900; i!=901;i=i+0.001)
    {
    cout <<fixed<<setprecision(20) << i<<endl;
    }

    return 0;
}
