#include <iostream>

using namespace std;

int main() {
    int n;
    int max = 0;
    int prevT;
    int prevD;
    cin >> n;
    cin >> prevT;
    cin >> prevD;

    
    for(int i = 1; i < n; ++i) {
        int t;
        int d;

        cin >> t;
        cin >> d;
        

        int current = (d - prevD) / (t-prevT);
        prevT = t;
        prevD = d;
        if(current > max) {
            max = current;
        }

        
    }

    cout << max << endl;
    
    return 0;
}
