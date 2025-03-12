#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> umap;

    // Insert key-value pairs
    umap["apple"] = 5;
    umap["banana"] = 10;

    // Accessing values
    std::cout << "Apple count: " << umap["apple"] << "\n";

    // Iterating over unordered_map
    for (const auto &pair : umap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
