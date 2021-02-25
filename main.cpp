#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"

int main()
{
    std::cout << "box(4,7):\n";
    std::cout << box(4,7);
    std::cout << "\n------------------\n";
    std::cout << "checkerboard(11,6):\n";
    std::cout << checkerboard(11,6);
    std::cout << "\n------------------\n";
    std::cout << "cross(5):\n";
    std::cout << cross(5);
    std::cout << "\n------------------\n";
    std::cout << "lower(8):\n";
    std::cout << lower(8);
    std::cout << "\n------------------\n";

    return 0;
}