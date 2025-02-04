#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums = {10, 20, 30, 40, 20, 30};

    std::cout << "Number of buckets: " << ums.bucket_count() << "\n";

    for (size_t i = 0; i < ums.bucket_count(); ++i) {
        std::cout << "Bucket " << i << " has " << ums.bucket_size(i) << " elements.\n";
    }

    return 0;
}
