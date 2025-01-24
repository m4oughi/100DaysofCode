#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1 = "abcdef";
    std::string str2 = "xyzab";

    auto it = std::find_first_of(str1.begin(), str1.end(), str2.begin(), str2.end());

    if (it != str1.end()) {
        std::cout << "First common character: " << *it << std::endl;
    } else {
        std::cout << "No common characters found." << std::endl;
    }

    return 0;
}
