#include <iostream>
#include "lower.h"
using namespace std;

string lower(int side_length)
{
    string row = "";
    for(int i = 1; i <= side_length; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            row += "*";
        }
        row += "\n";
    }
    return row;
}