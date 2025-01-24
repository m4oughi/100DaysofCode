#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "hello world";
    std::string result(str.size(), '\0');

    std::transform(str.begin(), str.end(), result.begin(), [](char c) { return std::toupper(c); });

    std::cout << "Original string: " << str << "\nTransformed string: " << result << std::endl;

    return 0;
}
