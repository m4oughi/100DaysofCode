#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Item {
    std::string name;
    int value;
};

int main() {
    std::vector<Item> items = {
        {"Sword", 100},
        {"Shield", 50},
        {"Potion", 20},
        {"Sword", 120}
    };

    std::replace_if(items.begin(), items.end(), [](const Item& item) {
        return item.name == "Sword";
    }, Item{"Bow", 80});

    std::cout << "After replace_if with custom objects:\n";
    for (const auto& item : items) {
        std::cout << item.name << ": " << item.value << "\n";
    }

    return 0;
}
