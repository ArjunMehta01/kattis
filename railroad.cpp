#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cin >> x;
    cin >> y;

    if ((x * 4 + y * 3) % 2 == 0)
    {
        cout << "possible" << endl;
    }
    else
    {
        cout << "impossible" << endl;
    }

    return 0;
}
