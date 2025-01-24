#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Tom", "Alice", "Bob", "Anna"};

    auto it = std::find_if(names.begin(), names.end(), [](const std::string& name) {
        return !name.empty() && name[0] == 'A';
    });

    if (it != names.end()) {
        std::cout << "First name starting with 'A': " << *it << std::endl;
    } else {
        std::cout << "No names starting with 'A' found." << std::endl;
    }

    return 0;
}
