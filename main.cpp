#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){ 
    const int Size = 200;
    const double xMin = -1.0;
    const double xMax = 1.0;
    const double yMin = -1.5;
    const double yMax = 1.5;
    string grid[Size][Size];
    
    for(int b = 0; b < 10; b++)
    {
    //Init grid - set all values to " "
    for(int x=0; x<Size;x++){
        for(int y=0; y<Size;y++){  
            grid[y][x] = "  ";
        }
    }


    // Sample the function across the selected x range and map it to grid cells.
    for(int i=0; i<Size;i++){
        double x = xMin + i * (xMax - xMin) / (Size - 1);


        //here lies the equation


        double yVal = sin(x*b);





        if(yVal >= yMin && yVal <= yMax){
            int gridY = static_cast<int>(round((yVal - yMin) * (Size - 1) / (yMax - yMin)));
            grid[gridY][i] = "@  ";
        }
    }

    
    // Hide the terminal cursor while the grid is being drawn
    cout << "\x1b[?25l" << flush;

    //Outputs the grid
    for(int y=Size-1; y>=0;y--){

     double yLabel = yMin + y * (yMax - yMin) / (Size - 1);
     cout << fixed << setprecision(2) << yLabel << "\t";
        for(int x=0; x<Size;x++){  
            cout << grid[y][x] << flush;
           //this_thread::sleep_for(chrono::milliseconds(2));
        }
        //  this_thread::sleep_for(chrono::milliseconds(1));
        cout << endl;
    }

    // Show the cursor again when drawing is finished
    cout << "\x1b[?25h" << flush;
    

    cout << endl;

    //this_thread::sleep_for(chrono::milliseconds(250));
    }
    return 0;
}