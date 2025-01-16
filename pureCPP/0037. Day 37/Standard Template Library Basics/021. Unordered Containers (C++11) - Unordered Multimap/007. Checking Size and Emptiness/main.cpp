#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> scores;

    std::cout << "Is the multimap empty? " << (scores.empty() ? "Yes" : "No") << "\n";

    scores.insert({"Alice", 90});
    std::cout << "Size of multimap: " << scores.size() << "\n";

    return 0;
}
