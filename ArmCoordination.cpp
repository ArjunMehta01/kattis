/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int x;
    int y;
    int r;

    int xl = x - r;
    int xr = x + r;

    int yt = y + r;
    int yb = y - r;

    cout << xl << yt << endl;
    cout << xr << yt << endl;
    cout << xr << yb << endl;
    cout << xl << yb << endl;

    return 0;
}
