#include <iostream>
using namespace std;
int main ()
{
    double r, c, d;
    char choice;
    cout << "'1' - circumference of the circle" << endl;
    cout << "'2' - diameter of the circle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    if ( choice == '1')
    {
        cout << "Enter the radius of the circle: ";
        cin >> r;
        c = 2 * 3.14 * r;
        cout << "The circumference of the circle is: " << c;
    }
    if ( choice == '2' )
    {
        cout << "Enter the radius of the circle: ";
        cin >> r;
        d = 2 * r;
        cout << "The diameter of the circle is: " << d;
    }
    if ( choice != '1' or '2')
    {
    cout << "Invalid choice";
    }
    return 0;
}