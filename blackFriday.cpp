#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    unordered_map<int, int> rolled;
    cin >> n;
    int highestUnique;


    for(int i = 0; i < n; ++i){
        int roll;
        cin >> roll;
        if(rolled.find(roll) == rolled.end()) {
            rolled.insert({roll, i});
        }
        else {
            rolled[roll] = -1;
        }
    }



    for(int i = 6; i > 0; --i){
        if(!(rolled.find(i) == rolled.end())) {
            if(rolled[i] >= 0) {
                cout << (rolled[i] + 1) << endl;
                break;
            }
        }

        if(i == 1) {
            cout << "none" << endl;
        }
    }

    return 0;
}
