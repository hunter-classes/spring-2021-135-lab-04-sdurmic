#include <iostream>
#include "box.h"
#include "checkerboard.h"

int main()
{
    std::cout << "box(4,7):\n";
    std::cout << box(4,7);
    std::cout << "\n------------------\n";
    std::cout << "checkerboard(6,8):\n";
    std::cout << checkerboard(6,8);
    std::cout << "\n------------------\n";
}