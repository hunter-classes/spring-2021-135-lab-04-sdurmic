#include <iostream>
#include "cross.h"
using namespace std;

string cross(int size)
{
    string row = "";
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i==j || j==(size-i-1))
            {
                row += "*";
            }
            else
            {
                row += " ";
            }
            
        }
        row += '\n';
    }
    return row;
}