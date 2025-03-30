#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    for (const auto& pair : data) { // C++11 supports structured iteration
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    return 0;
}
