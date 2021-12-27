#include <iostream>

using namespace std;


int main() {
    int h;
    int w;
    int n;

    cin >> h;
    cin >> w;
    cin >> n;


    int count = h;
    int layerWidth = w;

    for(int i = 0; i < n; i++){
        int brick;
        cin >> brick;


        layerWidth = layerWidth - brick;


        if(layerWidth == 0){
            layerWidth = w;
            count--;

            if(count == 0){
                cout << "YES" << endl;
                break;
            }
        }
        else if(layerWidth < 0){
            cout << "NO" << endl;
            break;
        }
    }
}

