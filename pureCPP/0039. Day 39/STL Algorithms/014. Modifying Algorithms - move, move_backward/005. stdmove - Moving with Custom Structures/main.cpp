#include <iostream>
#include <vector>
#include <algorithm>

struct Item {
    std::string name;
    int value;
};

int main() {
    std::vector<Item> source = {{"Sword", 100}, {"Shield", 50}, {"Potion", 20}};
    std::vector<Item> destination(3);

    std::move(source.begin(), source.end(), destination.begin());

    std::cout << "Destination items: ";
    for (const auto& item : destination) {
        std::cout << "(" << item.name << ", " << item.value << ") ";
    }
    std::cout << std::endl;

    return 0;
}
