#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<int, std::string> ummap = {
        {1, "One"}, {2, "Two"}, {1, "First"}
    };

    std::cout << "Size of unordered_multimap: " << ummap.size() << "\n";

    return 0;
}
