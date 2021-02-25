#include <iostream>
#include <string>
#include "checkerboard3x3.h"
using namespace std;

string checkerboard3x3(int width, int height)
{
    string row = "";
    for (int i = 0; i < height; ++i) {
        for (int j = 0, c = '*'; j < width; ++j, c = '*') {
            if (((j / 3) & 1) ^ ((i / 3) & 1))
                c = ' ';

            row += (char)c;
        }

        row += '\n';
    }

    return row;
}