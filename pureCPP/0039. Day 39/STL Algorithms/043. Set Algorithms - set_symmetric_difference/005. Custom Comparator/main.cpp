#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) < std::tolower(b);
}

int main() {
    std::string set1 = "ABCDEF";
    std::string set2 = "CDEFGH";
    std::string result;

    std::set_symmetric_difference(set1.begin(), set1.end(),
                                   set2.begin(), set2.end(),
                                   std::back_inserter(result), caseInsensitiveCompare);

    std::cout << "Case-Insensitive Symmetric Difference: " << result << "\n";
    return 0;
}
