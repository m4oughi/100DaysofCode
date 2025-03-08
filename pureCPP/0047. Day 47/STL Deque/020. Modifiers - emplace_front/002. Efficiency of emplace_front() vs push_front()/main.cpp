#include <iostream>
#include <deque>

class Item {
public:
    int value;
    Item(int v) : value(v) { std::cout << "Constructing Item " << value << "\n"; }
    ~Item() { std::cout << "Destroying Item " << value << "\n"; }
};

int main() {
    std::deque<Item> dq;

    std::cout << "Using push_front:\n";
    dq.push_front(Item(10)); // Creates a temporary object and moves it

    std::cout << "\nUsing emplace_front:\n";
    dq.emplace_front(20); // Constructs directly in place

    return 0;
}
