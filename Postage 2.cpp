#include <iostream>
using namespace std;
int main ()
{    
    double wop, cop, pr;
    int cq;
    char choice;
    cout << "                 Welcome to SpeedyMail!" << endl;
    cout << "\n                   (Postage Delivery)" << endl;
    cout << "\nEnter the weight of the postage (in oz): ";
    cin >> wop;
    pr = wop - 1;
    cq = pr / 0.25;
    cout << "\nType of delivery: \n(1) Ordinary Delivery" << endl;
    cout << "(2) Special Delivey" << endl;
    cout << "\nEnter the number of your choice: ";
    cin >> choice;
    if ( choice == '1' )
    {
        cop = ( cq * 0.08 ) + 0.24;
        cout << "\nThe cost of postage's delivery will be: " << "$"  << cop;
    }
    if ( choice == '2' )
    {
        cop = ( cq * 0.08 ) + 0.24 + 5;
        cout << "\nThe cost of postage's delivery will be: " << "$"  << cop;
    }
    else
    {
        cout << "\nInvalid Input! Please try again." << endl;
    }
    return 0;
}