#include <iostream>
#include <map>

struct Descending {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::multimap<int, std::string, Descending> employees = {{1, "Alice"}, {2, "Bob"}, {1, "Charlie"}};

    for (const auto &pair : employees) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}
