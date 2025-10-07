#include <iostream>
using namespace std;
int main ()
{
    double q1, q2, q3, mt, ft, qav, fav;
    const double pav = 60.0;
    cout << "Enter the score on quiz 1 (out of 10): ";
    cin >> q1;
    cout << "Enter the score on quiz 2 (out of 10): ";
    cin >> q2;
    cout << "Enter the score on quiz 3 (out of 10): ";
    cin >> q3;
    qav = ( q1 + q2 ) / 20 * 100;
    cout << "The quiz average is: " << qav << endl;
    
    cout << "Enter the midterm score (out of 100): ";
    cin >> mt;
    cout << "Enter the final term score (out of 100): ";
    cin >> ft;
    fav = ( qav * 0.50 ) + ( mt * 0.25 ) + ( ft * 0.25 );
    cout << "The final average is: " << fav << "%" << endl;
    if ( fav >= pav )
    {
        cout << "Passed";
    }
    else
    {
        cout << "Failed";
    }
    return 0;
}
    