#include <iostream>
using namespace std;
int main ()
{

    int s, l, w, b, h, r, a;
    char shape, rep;
    do
    {
        cout << "Chooes a shape! ";
        cout << "\n[A] Square" << endl;
        cout << "[B] Rectangle" << endl;
        cout << "[C] Triangle" << endl;
        cout << "[D] Circle" << endl;
        cout << "The chosen shape is: ";
        cin >> shape;
        shape = toupper (shape);
        switch (shape)
        {
            case 'A':
                cout << "\n[A] Square";
                cout << "\nEnter the side of sqaure: ";
                cin >> s;
                    a = s * s;
                break;

            case 'B':
                cout << "\n[B] Rectangle";
                cout << "\nEnter the lenght of rectangle: ";
                cin >> l;
                cout << "Enter the width of rectangle: ";
                cin >> w;
                    a = l * w;
                break;

            case 'C':
                cout << "\n[C] Triangle";
                cout << "\nEnter the base of the triangle: ";
                cin >> b;
                cout << "Enter the height of the triangle: ";
                cin >> h;
                    a = 1 / 2 * ( b * h );
                break;
            
            case 'D':
                cout << "\n[D] Circle";
                cout << "\nEnter the radius of the circle: ";
                cin >> r;
                    a = 3.14 * ( r * r );
                break;
            default:
                cout << "Invalid letter choice! Please try again." << endl;
                break;
        }
    cout << "The shapes's area is: " << a << endl;
    cout << "\nDo you want restart? [ y / n ]?: ";
    cin >> rep;
    rep = toupper ( shape );
    }
    while ( rep = 'y' );
    return 0;    
}