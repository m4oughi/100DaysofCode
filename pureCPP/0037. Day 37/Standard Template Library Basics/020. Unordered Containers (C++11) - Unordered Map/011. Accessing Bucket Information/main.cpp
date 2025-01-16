#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 100}, {"Bob", 90}};

    std::cout << "Bucket count: " << scores.bucket_count() << "\n";
    for (size_t i = 0; i < scores.bucket_count(); ++i) {
        std::cout << "Bucket " << i << " has " << scores.bucket_size(i) << " elements.\n";
    }

    return 0;
}
