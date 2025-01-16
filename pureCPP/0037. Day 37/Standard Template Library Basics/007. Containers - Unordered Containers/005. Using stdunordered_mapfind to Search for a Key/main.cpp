#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> age = {{"Alice", 25}, {"Bob", 30}};
    std::string name = "Alice";

    if (age.find(name) != age.end()) {
        std::cout << name << "'s age is " << age[name] << std::endl;
    } else {
        std::cout << name << " not found in the map.\n";
    }
    return 0;
}
