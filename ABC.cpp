#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main () {

    int ABC[3];

    for(int i = 0; i < 3; i ++) {
        cin >> ABC[i];
    }
    sort(ABC, ABC+3);
    string order;
    cin >> order;

    for (int i = 0; i < 3; i++){
        switch (order[i])
        {
        case 'A':
            cout << ABC[0];
            break;

        case 'B':
            cout << ABC[1];
            break;

        case 'C':
            cout << ABC[2];
            break;
        }
        
        if(i < 2){
            cout << " ";
        }
        else {
            cout << endl;
        }
    }

    
    return 0;
}