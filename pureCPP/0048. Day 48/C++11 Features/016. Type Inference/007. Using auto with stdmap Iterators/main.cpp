#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> ageMap = {{"Alice", 25}, {"Bob", 30}};

    for (auto it = ageMap.begin(); it != ageMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
