#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Hello, World!" << endl;
    string grid[3][3] {
        // init with all 0
        {"0", "0", "0"},
        {"0", "0", "0"},
        {"0", "0", "0"}
    };
    

    for(int i = 0; i < 3; i++){
        cout << i << endl;
    }
    return 0;
}