#include <iostream>

using namespace std;


int main() {

    while(true){
    
        int sides [3];

        cin >> sides[0];
        cin >> sides[1];
        cin >> sides [2];

        if(!sides[0] && !sides[1] && !sides[2]) {
            break;
        }

        for(int i = 0; i < 2; ++i) {

            for(int j = 0; j < 2 - i; ++j){
                if(sides[j] > sides[j+1]) {
                    int temp = sides[j];
                    sides[j] = sides[j+1];
                    sides[j+1] = temp;
                }
            }
        }

        if(sides[2] * sides[2] - sides[1] * sides[1] == sides[0] * sides[0]) {
            cout << "right" << endl;
        }
        else {
            cout << "wrong" << endl;
        }
    }

    return 0;
}
