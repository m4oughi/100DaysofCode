#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers = {1, 2, 3, 4, 5, 3};

    for (size_t i = 0; i < numbers.bucket_count(); ++i) {
        std::cout << "Bucket " << i << " has " << numbers.bucket_size(i) << " elements.\n";
    }
    return 0;
}
