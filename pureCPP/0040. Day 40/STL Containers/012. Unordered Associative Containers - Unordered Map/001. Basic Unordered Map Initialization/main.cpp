#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> umap = {
        {1, "Apple"}, {2, "Banana"}, {3, "Cherry"}
    };

    for (const auto& pair : umap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
