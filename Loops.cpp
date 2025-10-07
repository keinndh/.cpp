#include <iostream>
using namespace std;
int main ()
{

    int s, l, w, b, h, r, a, y, n;
    char shape, rep;
    do
    {
        cout << "Chooes a shape! ";
        cout << "\n[A] Square" << endl;
        cout << "[B] Rectangle" << endl;
        cout << "[C] Triangle" << endl;
        cout << "[D] Circle" << endl;
        cout << "\nThe chosen shape is? \n(type the letter that corresponds the shape): ";
        cin >> shape;
        shape = toupper (shape);
        switch (shape)
        {
            case 'A':
                cout << "\n[A] Square";
                cout << "\nEnter the side of sqaure: ";
                cin >> s;
                    a = s * s;
                cout << "The shapes's area is: " << a << endl;
                break;

            case 'B':
                cout << "\n[B] Rectangle";
                cout << "\nEnter the lenght of rectangle: ";
                cin >> l;
                cout << "Enter the width of rectangle: ";
                cin >> w;
                    a = l * w;
                cout << "The shapes's area is: " << a << endl;
                break;

            case 'C':
                cout << "\n[C] Triangle";
                cout << "\nEnter the base of the triangle: ";
                cin >> b;
                cout << "Enter the height of the triangle: ";
                cin >> h;
                    a = 1 / 2 * ( b * h );
                cout << "The shapes's area is: " << a << endl;
                break;
            
            case 'D':
                cout << "\n[D] Circle";
                cout << "\nEnter the radius of the circle: ";
                cin >> r;
                    a = 3.14 * ( r * r );
                cout << "The shapes's area is: " << a << endl;
                break;
            default:
                cout << "\n --Invalid letter choice! Please try again.--" << endl;
                break;
        }
    cout << "\nDo you want restart? [ y / n ]?: ";
    cin >> rep;
    rep = toupper ( rep );
    }
    while ( rep == 'y' );
    return 0;    
}