#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) < std::tolower(b);
}

int main() {
    std::string set1 = "ABC";
    std::string set2 = "bcd";
    std::string result;

    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result), caseInsensitiveCompare);

    std::cout << "Intersection: " << result << "\n";
    return 0;
}
