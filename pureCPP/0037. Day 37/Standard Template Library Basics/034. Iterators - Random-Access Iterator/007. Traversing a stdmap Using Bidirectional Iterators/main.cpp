#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {{1, "one"}, {2, "two"}, {3, "three"}};

    std::cout << "Forward traversal: ";
    for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << it->first << ":" << it->second << " ";
    }

    std::cout << "\nBackward traversal: ";
    for (auto it = data.rbegin(); it != data.rend(); ++it) {
        std::cout << it->first << ":" << it->second << " ";
    }

    std::cout << "\n";

    return 0;
}
