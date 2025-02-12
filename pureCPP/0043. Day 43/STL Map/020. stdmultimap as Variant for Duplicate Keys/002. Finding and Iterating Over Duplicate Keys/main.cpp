#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> products = {
        {101, "Apple"}, {102, "Banana"}, {101, "Avocado"}, {103, "Cherry"}
    };

    int key = 101;
    auto range = products.equal_range(key);

    std::cout << "Products with ID " << key << ":\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
