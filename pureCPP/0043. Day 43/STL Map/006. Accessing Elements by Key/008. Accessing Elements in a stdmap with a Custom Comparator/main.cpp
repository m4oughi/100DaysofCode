#include <iostream>
#include <map>

struct DescendingOrder {
    bool operator()(int a, int b) const {
        return a > b; // Sort in descending order
    }
};

int main() {
    std::map<int, std::string, DescendingOrder> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    std::cout << "Students in Custom Order:\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
