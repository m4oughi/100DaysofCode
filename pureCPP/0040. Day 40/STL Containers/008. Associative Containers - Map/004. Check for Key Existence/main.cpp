#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m = {{1, "One"}, {2, "Two"}};

    if (m.find(1) != m.end()) {
        std::cout << "Key 1 found.\n";
    }

    if (m.count(3) == 0) {
        std::cout << "Key 3 not found.\n";
    }

    return 0;
}
