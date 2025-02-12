#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> rbTree;

    for (int i = 10; i >= 1; --i) {
        rbTree[i] = "Value " + std::to_string(i);
    }

    std::cout << "Tree remains balanced (Sorted Order):\n";
    for (const auto& entry : rbTree) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
