#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> ummap;

    if (ummap.empty()) {
        std::cout << "The unordered multimap is empty.\n";
    }

    ummap.insert({100, "Hundred"});

    if (!ummap.empty()) {
        std::cout << "Now the unordered multimap contains elements.\n";
    }

    return 0;
}
