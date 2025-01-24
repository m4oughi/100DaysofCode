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
        {"Potion", 20}
    };
    std::vector<Item> result(items.size());

    std::replace_copy_if(items.begin(), items.end(), result.begin(), [](const Item& item) {
        return item.value < 50;
    }, Item{"Replaced", 0});

    std::cout << "Original items:\n";
    for (const auto& item : items) {
        std::cout << item.name << ": " << item.value << "\n";
    }

    std::cout << "Result items:\n";
    for (const auto& item : result) {
        std::cout << item.name << ": " << item.value << "\n";
    }

    return 0;
}
