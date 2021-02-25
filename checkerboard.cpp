#include <iostream>
using namespace std;

string checkerboard(int width, int height)
{
    for (int row = 0; row < height; row++) 
    {
        for (int col = 0; col < width; col++) 
        {
        if((row+col)%2==0)
            cout << "*";
        else
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}