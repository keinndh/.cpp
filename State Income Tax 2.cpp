#include <iostream>
#include <conio.h>
using namespace std;

double NetInc ( double grossIncome, double deduction );
double RateofTax ( double netIncome );
double StateTax ( double netIncome, double taxRate );

int main ()
{
    double netIncome, grossIncome, deduction, incomeTax, taxRate;
    clrscr ();
    cout << "Enter the gross income: ";
    cin >> grossIncome;
    cout << "Enter the deduction amount: ";
    cin >> deduction;
    
    netIncome = NetInc ( grossIncome, deduction );
    taxRate = RateofTax ( netIncome );
    incomeTax = StateTax ( netIncome, taxRate );
    
    
    cout << "\nThe net income is: " << "$" << netIncome << endl;
    cout << "The state income tax is: " <<"$" << incomeTax;
    getch ();
    return 0;
}

double NetInc ( double grossIncome, double deduction )
{
    return ( grossIncome - deduction );
}

double RateofTax ( double netIncome )
{
    if ( netIncome < 8001 )
    {
        return ( netIncome * 0.03 );
    }
    else if ( netIncome < 15000 )
    {
        return ( netIncome * 0.05 );
    }
    else
    {
        return ( netIncome * 0.80 );
    }
}

double StateTax ( double netIncome, double taxRate )
{
    return ( taxRate );
}