#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> scores = {{"Alice", 85}, {"Alice", 90}, {"Bob", 75}};

    scores.clear();

    std::cout << "Multimap size after clearing: " << scores.size() << "\n";

    return 0;
}
