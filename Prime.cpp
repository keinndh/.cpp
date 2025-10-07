#include <iostream>
using namespace std;

int main ()
{
    int n, pr = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Number is not prime.";
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                pr = 0;
                break;
            }
        }
        if (pr == 1)
        {
            cout << "Number is prime.";
        }
        else
        {
            cout << "Number is not prime.";
        }
    }
    return 0;
}