#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "aaabbccdde";

    auto new_end = std::unique(str.begin(), str.end());

    std::cout << "String after std::unique: " << std::string(str.begin(), new_end) << std::endl;

    return 0;
}
