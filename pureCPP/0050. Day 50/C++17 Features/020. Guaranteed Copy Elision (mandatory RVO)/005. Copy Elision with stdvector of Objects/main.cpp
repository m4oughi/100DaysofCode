#include <iostream>
#include <vector>

class Item {
public:
    Item() { std::cout << "Item Constructor\n"; }
    ~Item() { std::cout << "Item Destructor\n"; }
};

std::vector<Item> createVector() {
    return std::vector<Item>(3); // No extra copies/moves
}

int main() {
    std::vector<Item> vec = createVector();
    return 0;
}
