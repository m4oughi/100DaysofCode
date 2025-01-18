#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    std::cout << "Accessing key-value pairs: ";
    for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << it->first << ":" << it->second << " ";
    }

    return 0;
}
