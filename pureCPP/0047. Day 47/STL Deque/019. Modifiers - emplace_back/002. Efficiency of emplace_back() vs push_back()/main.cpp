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

    std::cout << "Using push_back:\n";
    dq.push_back(Item(10)); // Creates a temporary object and moves it

    std::cout << "\nUsing emplace_back:\n";
    dq.emplace_back(20); // Constructs directly in place

    return 0;
}
