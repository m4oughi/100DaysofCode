#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3, 4, 5};

    for (size_t i = 0; i < numbers.bucket_count(); ++i) {
        std::cout << "Bucket " << i << " contains " << numbers.bucket_size(i) << " elements.\n";
    }
    return 0;
}
