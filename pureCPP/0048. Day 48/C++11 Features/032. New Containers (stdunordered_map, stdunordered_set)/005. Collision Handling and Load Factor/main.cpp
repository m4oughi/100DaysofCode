#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> umap;

    // Insert multiple elements
    for (int i = 0; i < 10; ++i) {
        umap[i] = i * 10;
    }

    std::cout << "Bucket count: " << umap.bucket_count() << "\n";
    std::cout << "Load factor: " << umap.load_factor() << "\n";

    return 0;
}
