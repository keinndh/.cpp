#include <iostream>
using namespace std;
int main ()
{    
    int ni, gri, t, dc;
    cout << "Enter the gross income: ";
    cin >> gri;
    cout << "Enter the deduction cost: ";
    cin >> dc;
    ni = gri - dc;
    if (( ni <= 8000 ))
    {
        t = ni * 0.03;
    }
    else if ( ni <= 15000 )
    {
        t = ni * 0.05;
    }
    else
    {
        t = 0.08 * ni;
    }
    cout << "\nThe net income is: $" << ni << endl;
    cout << "The state income tax is: $" << t;
    return 0;
}