#include <iostream>
using namespace std;
int main ()
{    
    int int1, int2;
    cout << "Plese Input two (2) integers :>" << endl;
    cout << "\nEnter the first integer: ";
    cin >> int1;
    cout << "Enter the second integer: ";
    cin >> int2;
    if (( int1 == 30 & int2 == 30 ) || int1 + int2 == 30 )
    {
        cout << "\nYour inputs are true!" << endl;
    }
    else
    {
        cout << "\nYour inputs are false!" << endl;
    }
    return 0;
    
}