#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> umap;

    if (umap.empty()) {
        std::cout << "The unordered map is empty.\n";
    }

    umap[100] = "Hundred";

    if (!umap.empty()) {
        std::cout << "Now the unordered map contains elements.\n";
    }

    return 0;
}
