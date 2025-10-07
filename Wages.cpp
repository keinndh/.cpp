#include <iostream>
using namespace std;
int main ()
{    
    int ws, pl1, pl2, pl3;
    cout << "Bicycle Salesperson Wage" << endl;
    cout << "\nEnter the weekly expected sales: $";
    cin >> ws;
    
    cout << "\nWages base on Plans";
    pl1 = 300;
    cout << "\nPlan 1: $" << pl1 << endl;
    
    pl2 = (( 3.5 * 40 ) + ( ws * 0.10 ));
    cout << "Plan 2: $" << pl2 << endl;
    
    pl3 = ws * 0.15;
    cout << "Plan 3: $" << pl3 << endl;
    
    if ( pl1 >= pl2 &&  pl1 >= pl3 )
    {
        cout << "\nThe best plan for the expected weekly sales is: Plan 1";
    }
    else if ( pl2 >= pl1 && pl2 >= pl3 )
    {
        cout << "\nThe best plan for the expected weekly sales is: Plan 2";
    }
    else
    {
        cout << "\nThe best plan for the expected weekly sales is: Plan 3";
    }
    return 0;
}
    
    