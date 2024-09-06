#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> umap = {{"apple", 1}, {"banana", 2}};

    for (auto& pair : umap) {  // auto& deduces that pair is an l-value reference to std::pair
        pair.second *= 10;  // Modify the value in the map
    }

    for (const auto& pair : umap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
        // Output: apple: 10
        //         banana: 20
    }
}
