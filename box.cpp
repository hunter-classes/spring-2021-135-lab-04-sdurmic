#include <iostream>
#include "box.h"
using namespace std;

string box(int width, int height)
{
    string row = "";
    for (int i= 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            row += "*";
        }
    row += "\n";
    }
return row;
}