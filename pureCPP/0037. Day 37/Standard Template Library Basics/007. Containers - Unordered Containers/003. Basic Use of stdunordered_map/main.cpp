#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> age;
    age["Alice"] = 25;
    age["Bob"] = 30;

    for (const auto &entry : age) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}
