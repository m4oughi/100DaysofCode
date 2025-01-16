#include <iostream>
#include <map>

struct Descending {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::map<int, std::string, Descending> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    for (const auto &pair : students) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}
