#include <iostream>
#include <vector>

class Item {
public:
    int id;
    Item(int id) : id(id) {}
};

int main() {
    std::vector<Item> items;

    // Insert items
    items.emplace_back(1);
    items.emplace_back(2);
    items.emplace_back(3);

    // Erase the second item
    items.erase(items.begin() + 1);

    std::cout << "Remaining items after erase:" << std::endl;
    for (const auto& item : items) {
        std::cout << "Item ID: " << item.id << std::endl;
    }

    return 0;
}
