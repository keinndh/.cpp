#include<iostream>
using namespace std;

int main ()
{
    int q1, q2, q3, ave;
    char lg;
    cout << "Quizzes Scores" << endl;
    cout << "Enter the quiz 1 score: ";
    cin >> q1;
    cout << "Enter the quiz 2 score: ";
    cin >> q2;
    cout << "Enter the quiz 3 score: ";
    cin >> q3;
    ave = ( q1 + q2 + q3 ) / 3;
    
    if ( ave >= 9 )
    {
        lg = 'A';
    }
    else if ( ave < 9 && ave >= 8 )
    {
        lg = 'B';
    }
    else if ( ave < 8 && ave >= 7 )
    {
        lg = 'C';
    }
    else if ( ave < 7 && ave >= 6 )
    {
        lg = 'D';
    }
    else
    {
        lg = 'F';
    }
    
    cout << "The letter grade equivalent: " << lg;
    return 0;
}