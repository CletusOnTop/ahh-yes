#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    const int Size = 40;
    const double k = 1.0;
    const double m = 0.0;
    string grid[Size][Size];
    

    //Init grid - set all values to " "
    for(int x=0; x<Size;x++){
        for(int y=0; y<Size;y++){  
            grid[y][x] = ". ";
        }
    }

    double yVal;
    for(int i=0; i<Size;i++){
    yVal = k * i + m;
    cout << fixed << setprecision(2) << yVal << endl;
    int gridY = static_cast<int>(round(yVal));
    if(gridY >= 0 && gridY < Size){
    grid[gridY][i] = "@ ";
    }

    }

    
    // Hide the terminal cursor while the grid is being drawn
    cout << "\x1b[?25l" << flush;

    //Outputs the grid
 for(int y=Size-1; y>=0;y--){

    cout << y << "\t";
        for(int x=0; x<Size;x++){  
            cout << grid[y][x] << flush;
           //this_thread::sleep_for(chrono::milliseconds(1));
        }
        cout << endl;
    }

    // Show the cursor again when drawing is finished
    cout << "\x1b[?25h" << flush;
    

    cout << endl;
    return 0;
}