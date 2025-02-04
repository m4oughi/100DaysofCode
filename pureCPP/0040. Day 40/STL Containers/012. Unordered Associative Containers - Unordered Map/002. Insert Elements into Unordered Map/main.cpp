#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> umap;
    
    // Using insert()
    umap.insert({1, "One"});
    umap.insert(std::make_pair(2, "Two"));

    // Using operator[]
    umap[3] = "Three";
    
    for (const auto& pair : umap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
