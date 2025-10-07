#include <iostream>
using namespace std;
#include <conio.h>

int pr (int num)
{
    int sum = 0;
    for ( int x = 1; x <= num / 2; x++ )
    {
        if ( num % x == 0 ) sum += x;
    }
    return sum == num;
}

int main ()
{
    clrscr();
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if ( pr ( n ) )
        cout << n << " is a perfect number.";
        
    else
        cout << n << " is not a perfect number.";

    getch ();
    return 0;
}