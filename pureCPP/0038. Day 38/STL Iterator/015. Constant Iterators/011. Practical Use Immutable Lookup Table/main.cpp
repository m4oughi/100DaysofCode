#include <iostream>
#include <map>

int main() {
    const std::map<std::string, int> lookup = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 35}
    };

    std::cout << "Lookup table:\n";
    for (std::map<std::string, int>::const_iterator it = lookup.cbegin(); it != lookup.cend(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
