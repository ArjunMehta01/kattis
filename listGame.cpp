#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int x;
    cin >> x;
    int count = 0;

    int i =3;

    while(x % 2 == 0) {
        x = x /2;
        count++;
    }

    while(x > 1){
        if(i > sqrt(x)) {
            break;
        }
        else if(x % i == 0){
            count++;
            x = x / i;
        }
        else {
            i = i + 2;
        }
    }

    if(x != 1) {
        count++;
    }

    cout << count << endl;

    return 0;
}