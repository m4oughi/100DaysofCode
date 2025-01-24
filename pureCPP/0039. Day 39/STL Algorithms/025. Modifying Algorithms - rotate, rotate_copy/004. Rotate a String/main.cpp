#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "abcdef";

    std::rotate(str.begin(), str.begin() + 3, str.end());

    std::cout << "String after rotation: " << str << std::endl;

    return 0;
}
