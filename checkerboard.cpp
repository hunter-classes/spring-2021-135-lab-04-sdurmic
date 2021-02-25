#include <iostream>
#include "checkerboard.h"
using namespace std;

string checkerboard(int width, int height)
{
    string row = "";
    for(int i = 0; i < height; i++) 
    {
        for(int j = 0; j < width; j++) 
        {
        if((i + j) % 2 == 0)
            row += "*";
        else
            row += " ";
        }
        row += "\n";
    }
    return row;
}