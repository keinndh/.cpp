#include <iostream>
#include <conio.h>
using namespace std;

double RetroActv ( double prevAnn );
double AnnSalary ( double prevAnn );
double MonthSal ( double newAnnSal );

int main ()
{
    double prevAnn, retroPay, newAnnSal, newMonSal;
    clrscr ();
    cout << "Enter the previous annual salary: ";
    cin >> prevAnn;
    
    retroPay = RetroActv ( prevAnn );
    newAnnSal = AnnSalary ( prevAnn );
    newMonSal = MonthSal ( newAnnSal );
    
    cout << "\nThe retroactive pay is: " << retroPay << endl;
    cout << "The new annual salary is: " << newAnnSal << endl;
    cout << "The new monthly salary is: " << newMonSal;
    getch ();
    return 0;
}

double RetroActv ( double prevAnn )
{
    return (( prevAnn / 12 ) * 0.076 * 6 );
}

double AnnSalary ( double prevAnn )
{
    return ( prevAnn * ( 1 + 0.076 );
}

double MonthSal ( double newAnnSal )
{
    return ( newAnnSal / 12 );
}