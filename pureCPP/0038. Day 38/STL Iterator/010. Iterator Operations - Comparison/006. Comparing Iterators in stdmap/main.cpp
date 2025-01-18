#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    auto it1 = data.begin();
    auto it2 = data.end();

    std::cout << "Comparing map iterators: ";
    if (it1 != it2) {
        std::cout << "it1 is not equal to it2." << std::endl;
    }

    std::cout << "Map elements: ";
    for (auto it = it1; it != it2; ++it) {
        std::cout << it->first << ":" << it->second << " ";
    }

    return 0;
}
