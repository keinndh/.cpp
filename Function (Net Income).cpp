#include <iostream>
#include <conio.h>
using namespace std;

double NetInc ( double grossIncome, double deduction );

int main ()
{
    double netIncome, grossIncome, deduction, net;
    clrscr ();
    cout << "Enter the gross income: ";
    cin >> grossIncome;
    cout << "Enter the deduction amount: ";
    cin >> deduction;
    
    netIncome = NetInc ( grossIncome, deduction );
    
    if ( netIncome < 8001 )
    {
        net = netIncome * 1.03;
    }
    else if ( netIncome < 15000 )
    {
        net = netIncome * 1.05;
    }
    else
    {
        net = netIncome * 1.80;
    }
    
    cout << "The net income is: " << net;
}

double NetInc ( double grossIncome, double deduction )
{
    return ( grossIncome - deduction );
}