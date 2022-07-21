#include <iostream>
#include <map>

using namespace std;

int main()
{
    int S;
    int N;

    int val1;
    int prevVal;

    int count = 0;
    std::map<int, int> taken;
    cin >> S;
    cin >> N;

    cin >> val1;
    prevVal = val1;
    
    if (N == 1) {
        cout << (S / 2) - 1 << endl;
    }
    
    else {
        for (int i = 1; i <= N; ++i)
        {
            int currentVal;
            int space;
            cin >> currentVal;
    
            if (i == N)
            {
                space = (S + val1) - currentVal - 4;
            }
            else
            {
                space = currentVal - prevVal - 4;
                prevVal = currentVal;
            }
    
            if (space < 0)
            {
                continue;
            }
    
            int remain = (space + 1) % 2;
    
            count = count + (space / 2  + 1);
        }

        cout << (count) << endl;
    }

    return 0;
}
