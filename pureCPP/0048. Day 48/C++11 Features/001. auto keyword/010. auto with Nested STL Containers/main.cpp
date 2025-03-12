#include <iostream>
#include <vector>
#include <map>

int main() {
    std::map<int, std::vector<std::string>> data = {
        {1, {"Alice", "Bob"}},
        {2, {"Charlie", "David"}}
    };

    for (const auto& pair : data) {
        std::cout << "Key: " << pair.first << " -> ";
        for (const auto& name : pair.second) {
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
