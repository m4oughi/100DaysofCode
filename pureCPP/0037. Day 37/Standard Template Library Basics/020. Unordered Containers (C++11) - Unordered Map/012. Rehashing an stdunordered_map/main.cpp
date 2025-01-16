#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 100}, {"Bob", 90}};

    scores.rehash(20);

    std::cout << "Bucket count after rehashing: " << scores.bucket_count() << "\n";
    return 0;
}
