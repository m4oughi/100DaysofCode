#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1 = "hello";
    std::string str2 = "hello";

    bool isEqual = std::equal(str1.begin(), str1.end(), str2.begin());

    std::cout << (isEqual ? "Strings are equal." : "Strings are not equal.") << std::endl;

    return 0;
}
