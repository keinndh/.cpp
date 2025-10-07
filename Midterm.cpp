#include <iostream>
using namespace std;
int main ()
{    
    double nkc, roe, mkc, tcb, fcb;
    cout << "Enter the number of kilowatt-hour consumed: ";
    cin >> nkc;
    cout << "Enter the rate per kilowatt-hour: ";
    cin >> roe;
    
    if ( nkc <= 250 )
    {
        mkc = nkc * roe;
    }
    else if ( nkc < 501 )
    {
        mkc = ( nkc * roe ) + 250 + ( nkc - 250 ) + ( nkc * 0.15 );
    }
    else 
    {
        mkc = ( nkc * roe ) + 250 + ( nkc * 0.15 ) + ( nkc - 500 ) + ( nkc * 0.35 );
    }
    
    cout << "\nThe number of kilowatt-hour consumed is: " << nkc << endl;
    
    if ( mkc <= 250 )
    {
        tcb = mkc * 0.02;
    }
    else if ( mkc >= 250 && mkc <= 500 )
    {
        tcb = mkc * 0.05;
    }
    else 
    {
        tcb = mkc * 0.10;
    }
    
    fcb = ( mkc - tcb  ) - ( mkc * 0.10 );
    cout << "The computed bill is: " << fcb;
    return 0;
}
    
    