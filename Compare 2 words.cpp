#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main ()
{
    char word1, word2;
    int x, y, z;
    clrscr ();
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;
    
    x = strlen ( word1 );
    for ( y = 0; y < x-1; y++ )
    {
        for ( z = y+1; z < x-1; z++ )
        {
            if ( word [y] == word [z] )
            {
                word [z+1] = "\0";
            }
        }
    }
    
    
    for ( y = 0; y < x; y++ )
    {
        if ( word [y] = "\0";
        {
            continue;
        }
        else
        {
            for ( z = 0; z < x; z++ )
            {
                if ( word [y] == word [z] )
                {
                    cout << word [y] << ", ";
                }
            }
        }
    }  
    getch ();
    return 0;
}