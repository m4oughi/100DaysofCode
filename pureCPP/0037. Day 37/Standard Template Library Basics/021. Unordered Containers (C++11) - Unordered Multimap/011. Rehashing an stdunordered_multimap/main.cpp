#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> scores = {{"Alice", 85}, {"Alice", 90}, {"Bob", 75}};

    scores.rehash(20);

    std::cout << "Bucket count after rehashing: " << scores.bucket_count() << "\n";

    return 0;
}
