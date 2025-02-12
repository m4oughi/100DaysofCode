#include <iostream>
#include <map>

struct DescendingOrder {
    bool operator()(int a, int b) const {
        return a > b; // Reverse sorting order
    }
};

int main() {
    std::map<int, std::string, DescendingOrder> rbTree;

    rbTree[10] = "Ten";
    rbTree[20] = "Twenty";
    rbTree[5] = "Five";
    rbTree[15] = "Fifteen";

    std::cout << "Elements in descending order:\n";
    for (const auto& entry : rbTree) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
