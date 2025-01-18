#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
    };

    std::cout << "Reversed map: ";
    for (auto it = data.rbegin(); it != data.rend(); ++it) {
        std::cout << it->first << ":" << it->second << " ";
    }

    return 0;
}
