#include <iostream>
#include <vector>
#include <algorithm>

struct Item {
    std::string name;
    int value;
};

int main() {
    std::vector<Item> items(5);

    std::fill(items.begin(), items.end(), Item{"Default", 0});

    std::cout << "Filled vector of items:\n";
    for (const auto& item : items) {
        std::cout << item.name << ": " << item.value << "\n";
    }

    return 0;
}
