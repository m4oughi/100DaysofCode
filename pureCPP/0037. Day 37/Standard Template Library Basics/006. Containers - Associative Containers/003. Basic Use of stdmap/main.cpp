#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> age;
    age["Alice"] = 25;
    age["Bob"] = 30;

    for (const auto &entry : age) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}
