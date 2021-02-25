#include <iostream>
#include "upper.h"
using namespace std;

string upper(int side_length)
{
    string row = "";
    int i;
    int j;
    int sp;
    for(i = side_length; i > 0; i--)
    {
        for(sp = 0; sp < side_length - i; sp++)
        {
            row += " ";
        }
        for(j = 1; j <= i; j++)
        {
            row += "*";
        }
        row += '\n';
    }
    return row;
}