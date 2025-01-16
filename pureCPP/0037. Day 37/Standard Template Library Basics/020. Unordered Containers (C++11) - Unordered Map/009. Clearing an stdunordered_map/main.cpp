#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 100}, {"Bob", 90}};

    scores.clear();

    std::cout << "Map size after clearing: " << scores.size() << "\n";

    return 0;
}
