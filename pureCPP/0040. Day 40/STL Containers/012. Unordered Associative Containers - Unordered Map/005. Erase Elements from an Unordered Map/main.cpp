#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> umap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    umap.erase(2);

    for (const auto& pair : umap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
