#include <iostream>
using namespace std;
int main()
{
    double am, cam, exc;
    char choice;
    cout << "(d) Yen to Dollar " << endl;
    cout << "(y) Dollar to Yen" << endl;
    cout << "Enter the forex: ";
    cin >> choice;
    
    if (choice == 'd')
    {
    cout << "Enter the amount: ";
    cin >> am;
    cout << "Enter the exchange rate: ";
    cin >> exc;
    cam = am * exc;
    cout << "The amount in dollar is: " << cam << endl;
    }
    if (choice == 'y')
    {
    cout << "Enter the amount: ";
    cin >> am;
    cout << "Enter the exchange rate: ";
    cin >> exc;
    cam = am * exc;
    cout << "The amount in yen is: " << cam << endl;
    }
    if (choice != 'd' & choice != 'y')
    {
    cout << "Invalid Input!";
    }
    return 0;
}