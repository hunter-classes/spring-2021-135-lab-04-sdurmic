#include <iostream>
using namespace std;

string trapezoid(int width, int height)
{
    string row = "";
    int space = 0;
    if(width % 2 == 0 && height > width/2)
    {
        cout << "Impossible shape!";
    }
    else if(width % 2 != 0 && height > (width/2 +1))
    {
        cout << "impossible shape!";
    }
    else 
        for(int i = 1; i <= height; i++)
        {
            for(int s = 0; s < space; s++)
                row += " ";
                for(int j = 1; j <= width; j++)
                    row += "*";
                    row += '\n';
                    width = width - 2;
                    space++;
    }
    return row;
}