#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}};

    if (auto it = ages.find("Alice"); it != ages.end()) {
        std::cout << "Alice's age is " << it->second << '\n';
    } else {
        std::cout << "Alice not found.\n";
    }
    return 0;
}
