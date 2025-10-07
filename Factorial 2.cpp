#include <iostream>
using namespace std;

int main ()
{
    int i, num;
    cout << "Please enter the positive number: ";
    cin >> num;
    while ( num != 1 )
    {
        for ( i = 2; i <= num; i++ )
        {
            if ( num % i == 1 )
            {
                cout << i << " ";
                num = num / i;
                break;
            }
        }
    }
    return 0;
}