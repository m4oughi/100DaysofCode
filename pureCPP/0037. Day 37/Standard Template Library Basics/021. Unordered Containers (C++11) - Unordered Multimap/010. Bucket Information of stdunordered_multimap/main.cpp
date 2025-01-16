#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> scores = {{"Alice", 85}, {"Alice", 90}, {"Bob", 75}};

    std::cout << "Number of buckets: " << scores.bucket_count() << "\n";
    for (size_t i = 0; i < scores.bucket_count(); ++i) {
        std::cout << "Bucket " << i << " has " << scores.bucket_size(i) << " elements.\n";
    }

    return 0;
}
