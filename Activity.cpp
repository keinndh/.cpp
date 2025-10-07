#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
    double x, y, z;
    clrscr ();
    cout << "Enter a decimal value: ";
    cin >> x;
        y = floor ( x );
        z = x - y;
    if ( z >= 0.50 )
    {
        x = ceil ( x );
    }
    else
    {
        x = floor ( x );
    }
    cout << "The rounded value is: " << x;
    getch ();
    return 0;
}