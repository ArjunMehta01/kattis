#include <iostream>
#include <string>

using namespace std;


int main() {
    
    int count = 0;

    for(int i = 1; i < 6; i++){
        string temp;
        cin >> temp;

        for(int j = 3; j < temp.length()+2; j++){
            if(temp.substr(j-3, 3) == "FBI") {
                if(count == 0){
                    cout << i;
                }
                else {
                    cout << " " << i;
                }
                count++;
            }
        }
    }

    if(count == 0){
        cout << "HE GOT AWAY!" << endl;
    }
    else {
        cout << endl;
    }

    return 0;
}