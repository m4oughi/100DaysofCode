#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {10, 20, 30, 40};

    std::cout << "Number of buckets: " << uset.bucket_count() << "\n";

    for (size_t i = 0; i < uset.bucket_count(); ++i) {
        std::cout << "Bucket " << i << " has " << uset.bucket_size(i) << " elements.\n";
    }

    return 0;
}
