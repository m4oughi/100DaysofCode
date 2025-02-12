#include <iostream>
#include <map>

struct Descending {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::map<int, std::string, Descending> students = {{3, "Alice"}, {1, "Bob"}, {2, "Charlie"}};

    for (const auto& [key, value] : students) {
        std::cout << key << " -> " << value << "\n";
    }

    return 0;
}
