#include <iostream>
using namespace std;
int main ()
{
    double nhw, rph, nd;
    int gs, pt, tw, net;
    cout << "---Worker's Net Pay For A Week---" << endl;
    cout << "\nEnter the number of hours worked: ";
    cin >> nhw;
    cout << "Enter the rate per hour: ";
    cin >> rph;
    if (rph >= 40)
    {
        gs = ( nhw * rph );
    }
    else
    {
        gs = (40 * rph) * (nhw - 40) * (rph * 1.35);
    }    
    cout << "The worker's gross pay is: " << gs << endl;
    pt = ( gs * 0.27 ) - 6;
    tw = gs - pt;
    cout << "The total withholding is: " << tw << endl;
    cout << "\nEnter the number of dependents: "; 
    cin >> nd;
    if ( nd >= 3 )
    {
        net = tw + 10;
    }
    else
    {
        net = tw;
    }
    cout << "The net home pay is: " << net;   
    return 0;
}
        