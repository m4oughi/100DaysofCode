#include <iostream>
#include <deque>

class Item {
public:
    int value;
    Item(int v) : value(v) {}
    ~Item() { std::cout << "Destroying Item with value: " << value << "\n"; }
};

int main() {
    std::deque<Item*> dq;

    dq.push_back(new Item(10));
    dq.push_back(new Item(20));
    dq.push_back(new Item(30));

    // Manually delete pointers before calling clear()
    for (auto item : dq) {
        delete item;
    }

    dq.clear();  // Clears the deque after memory cleanup

    return 0;
}
