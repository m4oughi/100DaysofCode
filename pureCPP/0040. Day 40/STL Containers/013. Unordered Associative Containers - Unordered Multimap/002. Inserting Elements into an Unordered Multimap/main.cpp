#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> ummap;

    ummap.insert({1, "One"});
    ummap.insert({2, "Two"});
    ummap.insert(std::make_pair(1, "First"));

    for (const auto& pair : ummap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
