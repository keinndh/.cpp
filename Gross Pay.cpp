#include <iostream>
using namespace std;
int main()
{
    int nhw, hre, gs;
    cout << "Enter the number of hours worked of the employee: ";
    cin >> nhw;
    cout << "Enter the hour rate of each employee: ";
    cin >> hre;
    if (nhw <= 40)
    {
        gs = nhw * hre;
    }
    else
    {
        gs = (nhw * 40) * (hre - 40) * (hre * 1.05);
    }
    cout << "The gross salary is: " << gs;
    return 0;
}
        