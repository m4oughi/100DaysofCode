#include <iostream>
#include <map>

struct DescendingOrder {
    bool operator()(int a, int b) const {
        return a > b; // Sort in descending order
    }
};

int main() {
    std::map<int, std::string, DescendingOrder> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    students[2] = "Updated Bob"; // Updating Bob

    std::cout << "Updated Student Records (Descending Order):\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
