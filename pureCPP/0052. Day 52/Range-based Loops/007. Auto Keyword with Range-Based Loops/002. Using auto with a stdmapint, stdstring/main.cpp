#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    for (auto entry : students) { // 'auto' deduces std::pair<int, std::string>
        std::cout << entry.first << ": " << entry.second << std::endl;
    }

    return 0;
}
