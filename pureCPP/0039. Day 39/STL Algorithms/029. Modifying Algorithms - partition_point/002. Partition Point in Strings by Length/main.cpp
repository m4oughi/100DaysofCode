#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> strings = {"apple", "banana", "cherry", "fig", "pear"};
    std::stable_partition(strings.begin(), strings.end(), [](const std::string& s) { return s.length() >= 5; });

    auto it = std::partition_point(strings.begin(), strings.end(), [](const std::string& s) { return s.length() >= 5; });

    if (it != strings.end()) {
        std::cout << "Partition point (first short string): " << *it << std::endl;
    } else {
        std::cout << "No partition point found." << std::endl;
    }

    return 0;
}
