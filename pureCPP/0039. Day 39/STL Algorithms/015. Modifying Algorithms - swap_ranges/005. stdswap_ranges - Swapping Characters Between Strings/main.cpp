#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1 = "abcdef";
    std::string str2 = "123456";

    std::swap_ranges(str1.begin(), str1.begin() + 3, str2.begin());

    std::cout << "str1 after swap: " << str1 << std::endl;
    std::cout << "str2 after swap: " << str2 << std::endl;

    return 0;
}
