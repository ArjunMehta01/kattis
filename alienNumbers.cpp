#include <iostream>
#include <string>
#include <unordered_map>
#include <math.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string number;
        cin >> number;


        string system;
        cin >> system;


        string out;
        cin >> out;

        // first convert number to base 10
        unordered_map<char, int>og_system;
        int og_system_base = system.length();
        for(int j = 0; j < og_system_base; j++){
            og_system[system[j]] = j;
        }

        unordered_map<int, char>new_system;
        int new_system_base = out.length();
        for(int j = 0; j < new_system_base; j++){
            new_system[j] = out[j];
        }

        int sum = 0;
        for(int j = 0; j < number.length(); j++){
            sum += og_system[number[j]] * pow(og_system_base, number.length() - 1 - j);
        }
        string final = "";
        while(true) {

            int temp = sum % new_system_base;
            final = new_system[temp] + final;
            sum = (sum - temp) / new_system_base;

            if(sum == 0) {
                break;
            }

        }
        

        cout << "Case #" << (i+1) << ": " << final << endl;


    }


    return 0;
}