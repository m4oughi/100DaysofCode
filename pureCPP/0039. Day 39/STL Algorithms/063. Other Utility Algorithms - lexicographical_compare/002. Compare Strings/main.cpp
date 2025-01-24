#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1 = "apple";
    std::string str2 = "banana";

    if (std::lexicographical_compare(str1.begin(), str1.end(), str2.begin(), str2.end())) {
        std::cout << "\"" << str1 << "\" is lexicographically smaller than \"" << str2 << "\".\n";
    } else {
        std::cout << "\"" << str1 << "\" is not lexicographically smaller than \"" << str2 << "\".\n";
    }
    // Output: "apple" is lexicographically smaller than "banana".
}
