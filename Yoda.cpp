#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;
    int length;
    int indexA = a.length() - 1;
    int indexB = b.length() - 1;
    int exponentA = 0;
    int exponentB = 0;

    int outA = 0;
    int outB = 0;

    if(a.length() > b.length()){
        length = a.length();

    }
    else {
        length = b.length();
    }

    for(int i = length-1; i >= 0; i--) {
        if(indexA >= 0 && indexB >= 0){
            if(a[indexA] > b[indexB]) {
                outA = outA + (a[indexA] - '0') * pow(10, exponentA);
                exponentA++;

            }
            else if(b[indexB] > a[indexA]) {
                outB = outB + (b[indexB] -'0')* pow(10, exponentB);
                exponentB++;
            }
            else {
                outA = outA + (a[indexA] -'0')* pow(10, exponentA);
                exponentA++;

                outB = outB + (b[indexB] - '0') * pow(10, exponentB);
                exponentB++;
            }
        }
        else if(indexA < 0){
            outB = outB + (b[indexB]-'0') * pow(10, exponentB);
            exponentB++;
        }
        else {
            outA = outA + (a[indexA] -'0')* pow(10, exponentA);
            exponentA++;
        }
        indexA--;
        indexB--;

    }

    if(outA == 0 && exponentA == 0){
        cout << "YODA" << endl;
    }
    else {
        cout << outA << endl;
    }

    if(outB == 0 && exponentB == 0){
        cout << "YODA" << endl;
    }
    else {
        cout << outB << endl;
    }

}
