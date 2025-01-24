#include <iostream>
#include <vector>
#include <algorithm>

struct Item {
    std::string name;
    int value;
};

int main() {
    std::vector<Item> vec1 = {{"Sword", 100}, {"Shield", 50}};
    std::vector<Item> vec2 = {{"Bow", 70}, {"Arrow", 20}};

    std::swap_ranges(vec1.begin(), vec1.end(), vec2.begin());

    std::cout << "vec1 after swap: ";
    for (const auto& item : vec1) {
        std::cout << "{" << item.name << ", " << item.value << "} ";
    }
    std::cout << "\nvec2 after swap: ";
    for (const auto& item : vec2) {
        std::cout << "{" << item.name << ", " << item.value << "} ";
    }
    std::cout << std::endl;

    return 0;
}
