#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string str = "abc123def456";
    std::string alphabets, digits;

    std::partition_copy(str.begin(), str.end(), std::back_inserter(alphabets), std::back_inserter(digits),
                        [](char ch) { return std::isalpha(ch); });

    std::cout << "Alphabets: " << alphabets << "\n";
    std::cout << "Digits: " << digits << std::endl;

    return 0;
}
