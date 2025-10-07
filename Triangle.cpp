#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

double S ( double a, double b, double c);
double Area ( double sum );
double Output ( double sum, double a, double b, double c );

int main ()
{
    double a, b, c;
    clrscr ();
    cout << "Enter the length of A side: ";
    cin >> a;
    cout << "Enter the length of B side: ";
    cin >> b;
    cout << "Enter the length of C side: ";
    cin >> c;
    
    sum = S ( a, b, c );
    sEq = Area ( sum );
    area = Output ( double sum, double sEq );
    
    cout << "\nThe retroactive pay is: " << area;
    getch ();
    return 0;
}

double S ( double a, double b, double c )
{
    return ( a + b + c );
}

double Area ( double sum )
{
    return ( sum / 2 );
}

double Output ( double sum, double a, double b, double c)
{
    return ( sqrt ( sum ( sum - a) * ( sum - b ) * ( sum - c )));
}