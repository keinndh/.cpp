#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

double S ( double a, double b, double c);
double Area ( double ave, double a, double b, double c );
int main ()
{
    double a, b, c, ave, area, y;
    clrscr ();
    cout << "Enter the length of A side: ";
    cin >> a;
    cout << "Enter the length of B side: ";
    cin >> b;
    cout << "Enter the length of C side: ";
    cin >> c;
    
    ave = S ( a, b, c );
    area = Area ( ave, a, b, c );
    y = sqrt ( area );
    
    cout << "\nThe area of triangle is: " << y;
    getch ();
    return 0;
}

double S ( double a, double b, double c )
{
    return (( a + b + c ) / 2 );
}
double Area ( double ave, double a, double b, double c)
{
    return ( ave * ( ave - a ) * ( ave - b ) * ( ave - c ));
}