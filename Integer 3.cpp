#include <iostream>
using namespace std;
int main ()
{    
    int int1, int2;
    cout << "Please input two (2) integers (ranging from 20-30)" << endl;
    cout << "\nEnter the first integer: " ;
    cin >> int1;
    cout << "Enter the second integer: " ;
    cin >> int2;
    if ( int1, int2 >= 20 & int1, int2 <= 30 )
    {
        if ( int1 > int2 )
        {
            cout << "\nThe highest value is: " << int1;
        }
        else
        {
            cout << "\nThe highest value is: " << int2;
        } 
    }
    else 
    {
        cout << "\nCan't evaluate further! \nPlease try entering another value.\nThe evaluation of the entered value is: 0" << endl;
    }
    return 0;
}
