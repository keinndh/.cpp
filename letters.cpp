#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char word [20], let, x;
    int count;
    clrscr ();
    cout << "Enter a word: ";
    cin >> word;
    cout<< "Enter a letter: ";
    cin >> let;
    
    count = 0;
    for ( x = 0; x < 20; x++ )
    {
        if ( word [x] == let )
        {
            count++;
        }
    }
    cout << "Total "  << let << " letters are: " << count;
    getch ();
    return 0;
}