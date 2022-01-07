#include <iostream>
#include <math.h>
#include <iomanip> 

using namespace std;


int main() {

    int M;
    int N;
    double R;

    cin >> M;
    cin >> N;
    cin >> R;

    double segmentR = (R / double(N));

    double m1, n1, m2, n2;

    cin >> m1;
    cin >> n1;

    cin >> m2;
    cin >> n2;
    double distM;
    double distN;

    double smallest = INFINITY;

    if(n1 <= n2) {
        for(int i = n1; i >= 0; i--){
            distM = ((n1-i) * segmentR) * M_PI * abs(m2-m1)/double(M);
            distN = (2*i + n2 - n1) * segmentR;

            if (smallest > (distM +distN)) {
                smallest = (distM +distN);
            }
        }


        
    }
    else {

        for(int i = n2; i >= 0; i--){
            distM = ((n2-i) * segmentR) * M_PI * abs(m2-m1)/double(M);
            distN = (2*i + n1 - n2) * segmentR;
            
            if (smallest > (distM + distN)) {
                smallest = (distM + distN);
            }
        }  

    }

    cout << setprecision(8) << (smallest) << endl;




    return 0;
}