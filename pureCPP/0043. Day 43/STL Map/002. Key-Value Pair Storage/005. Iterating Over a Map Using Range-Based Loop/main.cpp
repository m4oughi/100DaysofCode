#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> ageMap = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 28}
    };

    for (const auto& entry : ageMap) {
        std::cout << entry.first << " is " << entry.second << " years old.\n";
    }

    return 0;
}
