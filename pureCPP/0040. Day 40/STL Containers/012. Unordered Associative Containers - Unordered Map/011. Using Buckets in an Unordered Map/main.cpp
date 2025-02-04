#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> umap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    std::cout << "Number of buckets: " << umap.bucket_count() << "\n";

    for (size_t i = 0; i < umap.bucket_count(); ++i) {
        std::cout << "Bucket " << i << " has " << umap.bucket_size(i) << " elements.\n";
    }

    return 0;
}
