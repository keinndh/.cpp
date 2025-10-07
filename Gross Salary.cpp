#include <iostream>
using namespace std;
int main()
{
    double nhw, hre, gs;
    cout << "Enter the number of hours worked of the employee: ";
    cin >> nhw;
    cout << "Enter the hour rate of each employee: ";
    cin >> hre;
    if (hre >= 40)
    {
        gs = nhw * hre;
    }
    else
    {
        gs = (40 * hre) * (nhw - 40) * (hre * 1.5);
        cout << "The gross salary is: " << gs << endl;
    }
    return 0;
}
        