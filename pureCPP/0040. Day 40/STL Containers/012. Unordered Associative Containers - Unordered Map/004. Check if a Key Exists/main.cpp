#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> umap = {{1, "One"}, {2, "Two"}};

    if (umap.find(2) != umap.end()) {
        std::cout << "Key 2 found: " << umap[2] << "\n";
    }

    if (umap.count(3) == 0) {
        std::cout << "Key 3 does not exist.\n";
    }

    return 0;
}
