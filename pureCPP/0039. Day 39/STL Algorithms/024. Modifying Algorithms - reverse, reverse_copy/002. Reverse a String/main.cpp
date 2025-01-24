#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "hello";

    std::reverse(str.begin(), str.end());

    std::cout << "String after reverse: " << str << std::endl;

    return 0;
}
