#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

int main(){
    const int Size = 15;

    string grid[Size][Size];
    

    //Init grid - set all values to .
    for(int x=0; x<Size;x++){
        for(int y=0; y<Size;y++){  
            grid[y][x] = ". ";
        }
    }


    // Hide the terminal cursor while the grid is being drawn
    cout << "\x1b[?25l" << flush;

    //Outputs the grid
    for(int x=0; x<Size;x++){
        for(int y=0; y<Size;y++){  
            cout << grid[y][x] << flush;
            this_thread::sleep_for(chrono::milliseconds(5));
        }
        cout << endl;
    }

    // Show the cursor again when drawing is finished
    cout << "\x1b[?25h" << flush;
    

    cout << endl;
    return 0;
}