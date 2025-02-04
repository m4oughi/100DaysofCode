#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    for (auto it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
