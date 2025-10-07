#include <iostream>
using namespace std;

int main ()
{
    int n, f = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid input, please enter a positive integer.";
    }
    else
    {
        for (int i = 1; i <= n; i++)
    {
            f = f * i;
    }
        cout << "Factorial of " << n << " is: " << f;
    }
    return 0;
}