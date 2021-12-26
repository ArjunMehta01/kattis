#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    cin >> n;
    double i = 1;
    int prev = ceil(n/pow(2,0) + 0);


    while(true) {
        int day = ceil(n/pow(2,i) + i);

        if(prev < day){
            cout << prev << endl;
            break;
        }

        prev = day;
        i++;
    }


    return 0;
}