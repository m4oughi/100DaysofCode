#include <iostream>
#include <map>
#include <list>

int main() {
    std::map<int, std::list<int>> data = {
        {1, {10, 20, 30}},
        {2, {40, 50, 60}}
    };

    for (const auto& pair : data) {
        std::cout << "Key: " << pair.first << " Values: ";
        for (auto it = pair.second.begin(); it != pair.second.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
