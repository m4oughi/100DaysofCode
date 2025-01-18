#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> data = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    for (std::map<std::string, int>::iterator it = data.begin(); it != data.end(); ++it) {
        it->second += 5; // Increase each value by 5
    }

    std::cout << "Modified map:\n";
    for (const auto& pair : data) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
