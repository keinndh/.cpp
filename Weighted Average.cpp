#include <iostream>
using namespace std;
int main ()
{    
    double q1, q2, q3, mt, ft, qav;
    int fav;
    cout << "Computing Students Average" << endl;
    
    cout << "\nQuizzes" << endl;
    cout << "Enter the quiz 1 scores (out of 10): ";
    cin >> q1;
    cout << "Enter the quiz 2 scores (out of 10): ";
    cin >> q2;
    cout << "Enter the quiz 3 scores (out of 10): ";
    cin >> q3;
    qav = ( q1 + q2 + q3 ) / 30 * 100;
    
    cout << "\nMajor Exams" << endl;
    cout << "Enter the midterm score (out of 100): ";
    cin >> mt;
    cout << "Enter the final's score (out of 100): ";
    cin >> ft;
    fav = (( qav * 0.25 ) + ( mt * 0.25 ) + ( ft * 0.50 ));
    cout << "\nThe final average is: " << fav << "%" << endl;
    
    if ( fav <= 100 && fav >= 90 )
    {
        cout << "The weighted average is: A";
    }
        else if ( fav < 90 && fav >= 80 )
        {
            cout << "The weighted average is: B";
        }
        else if ( fav < 80 && fav >= 70 )
        {
            cout << "The weighted average is: C";
        }
        else if ( fav < 70 && fav >= 60 )
        {
            cout << "The weighted average is: D";
        }
    else
    {
        cout << "The weighted average is: F";
    }
    return 0;
}
    
    
    