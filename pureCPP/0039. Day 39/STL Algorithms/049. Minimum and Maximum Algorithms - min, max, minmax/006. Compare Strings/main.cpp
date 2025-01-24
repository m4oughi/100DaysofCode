#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string a = "apple", b = "banana";

    std::cout << "Lexicographical Minimum: " << std::min(a, b) << "\n";
    std::cout << "Lexicographical Maximum: " << std::max(a, b) << "\n";

    return 0;
}
