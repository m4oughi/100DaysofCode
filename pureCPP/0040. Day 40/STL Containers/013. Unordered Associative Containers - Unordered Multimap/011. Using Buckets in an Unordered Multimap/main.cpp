#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> ummap = {{1, "One"}, {2, "Two"}, {1, "First"}};

    std::cout << "Number of buckets: " << ummap.bucket_count() << "\n";

    for (size_t i = 0; i < ummap.bucket_count(); ++i) {
        std::cout << "Bucket " << i << " has " << ummap.bucket_size(i) << " elements.\n";
    }

    return 0;
}
