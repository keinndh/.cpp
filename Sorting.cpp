#include <iostream>
using namespace std;

int main ()
{
    int qz [5], total, x, y, hs, ls, temp;
    double ave;
    
    for ( x = 0; x < 5; x++ )
    {
        cout << "Enter the score of quiz" << x+1 << ": ";
        cin >> qz [x];
        total = qz [x];
    }
    ave = double ( total / x );
    cout << "\nSummary \n";
    for ( x = 0; x < 5; x++ )
    {
    cout << "Quiz" << x+1 << ": " << qz [x] << endl;
    }
    cout << "Average: " << ave << endl;
    
    hs = 0;
    for ( x = 0; x < 5; x++ )
    {
        if ( hs < qz [x] )
        {
            hs = qz [x];
        }
        else
        {
            ls = qz [x];
        }
    }
    cout << "\nThe highest score is: " << hs << endl;
    cout << "The lowest score is: " << ls << endl;
    
    for ( x = 0; x < 5; x++ )
    {
        for ( y = 0; y < 4; y++ )
        {
            if ( qz [y] > qz [y+1] )
            {
                temp = qz [y+1];
                qz [y+1] = qz [y];
                qz [y] = temp;
            }
            else
            {
                temp = qz [y];
                qz [y] = qz [y+1];
                qz [y+1] = temp;
                cout << "( Highest - Lowest ): " << qz [y] << endl;
            }
        }
    }
    cout << "( Highest - Lowest ): " << qz [y] << endl
         << "( Lowest - Highest): " << qz [y] << endl;
    return 0;
}