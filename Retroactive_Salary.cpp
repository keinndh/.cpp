#include <iostream>
#include <conio.h>
using namespace std;

double RetroActv ( int prevAnn );
double AnnSalary ( int prevAnn );
double MonthSal ( int newAnnSal );

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

double RetroActv ( int prevAnn )
{
    return (( prevAnn / 12 ) * 0.076 * 6 );
}

double AnnSalary ( int prevAnn )
{
    return ( prevAnn * 1.076 );
}

double MonthSal ( int newAnnSal )
{
    return ( newAnnSal / 12 );
}