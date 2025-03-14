#include <iostream>
#include <map>

int main() {
    std::multimap<std::string, int> scores = {{"Alice", 85}, {"Alice", 90}, {"Bob", 75}};

    for (const auto &entry : scores) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}
