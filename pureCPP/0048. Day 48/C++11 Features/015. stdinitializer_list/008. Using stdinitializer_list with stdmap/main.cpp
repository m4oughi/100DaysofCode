#include <iostream>
#include <map>
#include <initializer_list>

int main() {
    std::map<std::string, int> ageMap = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 35}
    };

    for (const auto& entry : ageMap) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    return 0;
}
