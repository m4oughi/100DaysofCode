#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3};

    numbers.rehash(20);  // Manually set the bucket count

    std::cout << "Number of buckets after rehashing: " << numbers.bucket_count() << "\n";
    return 0;
}
