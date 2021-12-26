#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int C;
    cin >> C;


    for(int i = 0; i < C; i++){
        int N;
        cin >> N;
        int temp[N];
        double average = 0;

        for(int j = 0; j < N; j++){
            cin >> temp[j];
            average = average + temp[j];
        }

        average = average / N;
        int above = 0;
        for(int j = 0; j < N; j++){
            if(temp[j] > average){
                above++;
            }
        }
        double percent = (above)/((double)N) * 100;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);

        cout << percent << '%'<< endl;


    }

    return 0;
}


