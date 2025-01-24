#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

// Case-insensitive comparison
bool caseInsensitiveCompare(char a, char b) {
    return std::tolower(a) < std::tolower(b);
}

int main() {
    std::string superset = "AbCdEfG";
    std::string subset = "bD";

    if (std::includes(
            superset.begin(), superset.end(),
            subset.begin(), subset.end(),
            [](char a, char b) { return std::tolower(a) < std::tolower(b); })) {
        std::cout << "Subset is included in the superset (case-insensitive).\n";
    } else {
        std::cout << "Subset is not included in the superset (case-insensitive).\n";
    }

    return 0;
}
