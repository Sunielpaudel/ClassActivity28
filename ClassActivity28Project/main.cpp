#include <iostream>
#include "doubleToString.hpp"
using namespace converted;


int main() {
    double number = 12.34;
    int precision = 1;
    std::string result = doubleToString(number, precision);

    std::cout << "Converted string: " << result << std::endl;
    return 0;
}