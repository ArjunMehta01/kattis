#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        string x;
        cin >> x;
        

    transform(x.begin(), x.end(), x.begin(),
    [](unsigned char c){ return std::tolower(c); });

    if((x.find("rose") != std::string::npos || x.find("pink") != std::string::npos)){
        ++count;
    }
    }

    if(count == 0){
        cout << "I must watch Star Wars with my daughter" << endl;
    }
    else {
        cout << count << endl;
    }
    return 0;
}
