#include <iostream>
using namespace std;
#include <conio.h>

int main ()
{
    clrscr ();
    double deposit, rate, drate;
    int weeks, days;
    
    cout << "Enter amount of deposit: ";
    cin >> deposit;
    cout << "Enter annual interest rate (in percent): ";
    cin >> rate;
    cout << "Enter duration in weeks: ";
    cin >> weeks;
    
    drate = rate / 100 / 365;
    days = weeks * 7;

    for ( int x = 0; x < days; x++ )
    {
        deposit += deposit * drate;
    }

    cout << "The ending balance is: " << deposit;
    getch ();
}