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

    std::cout << "Using insert:\n";
    dq.insert(dq.begin(), Item(10)); // Creates a temporary object and copies it

    std::cout << "\nUsing emplace:\n";
    dq.emplace(dq.begin(), 20); // Constructs in place

    return 0;
}
