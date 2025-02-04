#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> umap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    std::cout << "Size of unordered_map: " << umap.size() << "\n";

    return 0;
}
