#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> umap = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 22}};

    for (auto it = umap.begin(); it != umap.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
