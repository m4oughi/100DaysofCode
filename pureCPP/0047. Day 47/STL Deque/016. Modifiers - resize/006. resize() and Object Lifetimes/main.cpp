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

    dq.resize(5, Item(100));  // Expanding with new items
    std::cout << "Deque expanded.\n";

    dq.resize(2);  // Shrinking, destructors called
    std::cout << "Deque shrunk.\n";

    return 0;
}
