#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::string version1 = "1.2.3";
    std::string version2 = "1.3.0";

    if (std::lexicographical_compare(version1.begin(), version1.end(), version2.begin(), version2.end())) {
        std::cout << "Version " << version1 << " is older than " << version2 << ".\n";
    } else {
        std::cout << "Version " << version1 << " is not older than " << version2 << ".\n";
    }
    // Output: Version 1.2.3 is older than 1.3.0.
}
