#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "h,e,l,l,o";

    str.erase(std::remove(str.begin(), str.end(), ','), str.end());

    std::cout << "String after removing commas: " << str << std::endl;

    return 0;
}
