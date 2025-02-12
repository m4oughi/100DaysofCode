#include <iostream>
#include <map>

void displayInventory(const std::map<std::string, int>& inventory) {
    if (inventory.empty()) {
        std::cout << "Inventory is empty.\n";
        return;
    }

    std::cout << "Inventory contains " << inventory.size() << " items:\n";
    for (const auto& item : inventory) {
        std::cout << item.first << ": " << item.second << "\n";
    }
}

int main() {
    std::map<std::string, int> inventory;

    displayInventory(inventory);

    inventory["Apples"] = 10;
    inventory["Oranges"] = 5;
    displayInventory(inventory);

    inventory.clear();
    displayInventory(inventory);

    return 0;
}
