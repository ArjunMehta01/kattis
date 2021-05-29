#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int temp_a;
    int temp_b;


    int max_length = a >=b ? to_string(a).length() : to_string(b).length();


    for(int i=0; i < max_length; i++){
            temp_a = a % 10;
            a = (a-temp_a) / 10;

            temp_b = b % 10;
            b = (b-temp_b) / 10;


            if(temp_a > temp_b){
                
            }
            else if(temp_b > temp_a){

            }
            else {

            }
    }




    cout << sizeof(a) << endl;
    return 0;
}