#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> scores = {{"Alice", 100}, {"Bob", 90}};

    std::cout << "Does Alice exist? " << scores.count("Alice") << "\n";
    std::cout << "Does Eve exist? " << scores.count("Eve") << "\n";

    return 0;
}
