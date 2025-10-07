#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    double x;
    cout << "Enter a value to round down: ";
    cin >> x;
    x = floor ( x );
    cout << "The round up value is: " << x;
    return 0;
}