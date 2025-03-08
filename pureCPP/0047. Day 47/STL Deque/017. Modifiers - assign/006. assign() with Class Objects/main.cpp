#include <iostream>
#include <deque>

class Item {
public:
    int value;
    Item(int v) : value(v) { std::cout << "Constructing Item " << value << "\n"; }
    ~Item() { std::cout << "Destroying Item " << value << "\n"; }
};

int main() {
    std::deque<Item> dq = {Item(1), Item(2), Item(3)};

    std::cout << "Replacing items...\n";
    dq.assign(2, Item(100));  // Assigning new objects

    std::cout << "End of program\n";
    return 0;
}
