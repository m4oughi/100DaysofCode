#include <iostream>
#include <map>

struct DescendingOrder {
    bool operator()(int a, int b) const {
        return a > b; // Sort in descending order
    }
};

int main() {
    std::map<int, std::string, DescendingOrder> students;

    students.insert({1, "Alice"});
    students.insert({2, "Bob"});
    students.insert({3, "Charlie"});

    std::cout << "Students (Descending Order):\n";
    for (const auto& entry : students) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
