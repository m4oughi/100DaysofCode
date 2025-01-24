#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Alice", "Anna", "Tom", "Andrew"};

    auto it = std::find_if_not(names.begin(), names.end(), [](const std::string& name) {
        return !name.empty() && name[0] == 'A';
    });

    if (it != names.end()) {
        std::cout << "First name not starting with 'A': " << *it << std::endl;
    } else {
        std::cout << "All names start with 'A'." << std::endl;
    }

    return 0;
}
