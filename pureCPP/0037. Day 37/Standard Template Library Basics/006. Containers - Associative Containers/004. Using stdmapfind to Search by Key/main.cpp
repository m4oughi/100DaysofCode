#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> age = {{"Alice", 25}, {"Bob", 30}};
    std::string name = "Alice";

    auto it = age.find(name);
    if (it != age.end()) {
        std::cout << name << "'s age is " << it->second << std::endl;
    } else {
        std::cout << name << " not found in the map.\n";
    }
    return 0;
}
