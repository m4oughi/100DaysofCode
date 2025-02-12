#include <iostream>
#include <map>

struct DescendingOrder {
    bool operator()(int a, int b) const {
        return a > b;  // Sort in descending order
    }
};

int main() {
    std::map<int, std::string, DescendingOrder> scores = {
        {1, "Low"},
        {2, "Medium"},
        {3, "High"}
    };

    std::cout << "Descending Order Map:\n";
    for (const auto& entry : scores) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
