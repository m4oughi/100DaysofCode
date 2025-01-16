#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers = {1, 2, 3};

    numbers.rehash(20);  // Manually increase bucket count

    std::cout << "Bucket count after rehashing: " << numbers.bucket_count() << "\n";
    return 0;
}
