#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
        double x;
        char selected;
        cout << "Choose what type of rounding you want:" << endl;
        cout << "\n(1) Round Up" << endl;
        cout << "(2) Round Down" << endl;
        cout << "\nYour choice is: ";
        cin >> selected;
        cout << "\nEnter a decimal value: ";
        cin >> x;
        if ( selected == '1')
        {
            x = ceil ( x );
            cout << "The round up value is: " << x << endl;
        }
        else
        {
            x = floor ( x );
            cout << "The round down value is: " << x << endl;
        }
        
    return 0;
}
