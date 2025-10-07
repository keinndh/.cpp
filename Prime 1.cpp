#include <iostream>
using namespace std;
#include <conio.h>

int pr ( int num )
{
    if ( num <= 1 )
    return 0;
    for ( int x = 2; x * x <= num; x++ )
    {
        if ( num % x == 0 )
        return 0;
    }
    return 1;
}

int main ()
{
    clrscr ();
    int n1, n2, repeat;
    do
    {
        cout << "\nEnter two integers (n1 n2): ";
        cin >> n1 >> n2;

        cout << "The list of prime numbers between " << n1 << " and " << n2 << " are: ";
        for (int x = n1; x <= n2; x++)
        
    {
            if ( pr ( x ) )
            cout << x << " ";
    }
        cout << "\nDo you want to repeat? (1 = Yes, 0 = No): ";
        cin >> repeat;
    } 
    while ( repeat == 1 );

    getch ();
    return 0;
}