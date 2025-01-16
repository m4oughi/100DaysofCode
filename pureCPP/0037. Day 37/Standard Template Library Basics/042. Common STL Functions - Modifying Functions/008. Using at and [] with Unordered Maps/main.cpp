#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> umap = {{"Alice", 10}, {"Bob", 20}, {"Charlie", 30}};

    std::cout << "Value for Bob: " << umap["Bob"] << "\n";

    // Add or modify element using []
    umap["David"] = 40;
    std::cout << "Value for David: " << umap["David"] << "\n";

    // Access using at
    try {
        std::cout << "Value for Alice: " << umap.at("Alice") << "\n";
        std::cout << "Access non-existent key: " << umap.at("Eve") << "\n";
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}
