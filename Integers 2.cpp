#include <iostream>
using namespace std;
int main ()
{    
    int intg;
    cout << "Enter the integer: ";
    cin >> intg;
    if ( intg > 0 )
    {
        cout << "The inputted value is acceptable." << endl;
    }
    else
    {
        cout << "The inputted value must be greater than 0." << endl;
    }
    cout << "\nEvaluating the user's Input... ";
    if (( intg == 3 || intg * = 3 ) || ( intg == 7 || intg * = 7 ))
    {
        cout << "\nEvaluation: The input is true!";
    }
    else 
    {
        cout << "\nEvaluation: The input is false!";
    }
    return 0;
}