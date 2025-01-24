#include <iostream>
#include <vector>
#include <algorithm>

struct Item {
    std::string name;
    int value;
};

int main() {
    std::vector<Item> items = {{"Sword", 100}, {"Shield", 50}, {"Potion", 20}};
    std::vector<Item> result(items.size());

    std::transform(items.begin(), items.end(), result.begin(), [](const Item& item) {
        return Item{item.name, item.value * 2};
    });

    std::cout << "Transformed items:\n";
    for (const auto& item : result) {
        std::cout << item.name << ": " << item.value << "\n";
    }

    return 0;
}
