#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> umap = {{1, "One"}, {2, "Two"}};

    std::cout << "Using operator[]: " << umap[1] << "\n";
    std::cout << "Using at(): " << umap.at(2) << "\n";

    return 0;
}
