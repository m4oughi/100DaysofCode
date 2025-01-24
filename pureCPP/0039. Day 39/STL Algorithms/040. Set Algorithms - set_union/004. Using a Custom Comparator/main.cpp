#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) < std::tolower(b);
}

int main() {
    std::string set1 = "Abc";
    std::string set2 = "Bde";
    std::string result;

    std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result), caseInsensitiveCompare);

    std::cout << "Union: " << result << "\n";
    return 0;
}
