#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char word [5] [20], temp [20];
    int x, y;
    cout << "Enter five words: \n";
    
    for ( x = 0; x < 5; x++ )
    {
        cout << "Word" << x+1 << ": ";
        cin >> word [x];
    }
    for ( x = 0; x < 4; x++ )
    {
        for ( y = 0; y < 4; y++ )
        {
            if ( strcmp ( word [y], word [y+1] ) < 0 )
            {
                strcpy ( temp, word [y] );
                strcpy ( word [y], word [y+1] );
                strcpy ( word [y+1], temp );
            }
        }
    }
    
    cout << "\nWords in alphabetical order \n";
    
    for ( x = 0; x < 5; x++ )
    {
        cout << word [x] << endl;
    }
    return 0;
}