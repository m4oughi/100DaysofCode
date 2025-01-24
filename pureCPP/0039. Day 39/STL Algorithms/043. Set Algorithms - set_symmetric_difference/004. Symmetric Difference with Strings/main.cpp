#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string set1 = "abcdef";
    std::string set2 = "cdefgh";
    std::string result;

    std::set_symmetric_difference(set1.begin(), set1.end(),
                                   set2.begin(), set2.end(),
                                   std::back_inserter(result));

    std::cout << "Symmetric Difference: " << result << "\n";
    return 0;
}
