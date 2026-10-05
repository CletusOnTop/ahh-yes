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
    
    for(int x=0; x<3;x++){
        for(int y=0; y<3;y++){  
            cout << grid[y][x];
        }
        cout << endl;
    }
    

    cout << endl;
    return 0;
}