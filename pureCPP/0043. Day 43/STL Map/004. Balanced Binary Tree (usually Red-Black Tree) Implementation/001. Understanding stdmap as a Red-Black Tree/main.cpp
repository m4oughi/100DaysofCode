#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> rbTree;

    rbTree[10] = "Ten";
    rbTree[20] = "Twenty";
    rbTree[5] = "Five";
    rbTree[15] = "Fifteen";

    std::cout << "Elements in sorted order (Red-Black Tree structure):\n";
    for (const auto& entry : rbTree) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
