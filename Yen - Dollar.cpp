#include<iostream>
using namespace std;
int main()
{
    double am, cam;
    char choice;
    const double ytdr = 0.0070;
    const double dtyr = 142.32;
    cout << "Enter 'y' to convert dollar to yen or 'd' to convert yen to dollar: ";
    cin >> choice;
    
    if (choice == 'y')
    {
    cout << "Enter the amount: ";
    cin >> am;
    cam = am * dtyr;
    cout << "The amount in yen is: " << cam << endl;
    }
    if (choice == 'd')
    {
    cout << "Enter the amount: ";
    cin >> am;
    cam = am * ytdr;
    cout << "The amount in dollar is: " << cam << endl;
    }
    if (choice != 'y' & choice != 'd')
    {
    cout << "Invalid Input!";
    }
    return 0;
}