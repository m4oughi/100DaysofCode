#include <iostream>
#include <memory>

class Data {
public:
    Data(int value) : value(value) {}
    void show() { std::cout << "Data: " << value << std::endl; }
private:
    int value;
};

int main() {
    std::unique_ptr<Data> ptr1 = std::make_unique<Data>(100);
    std::unique_ptr<Data> ptr2 = std::move(ptr1); // Transfer ownership

    // ptr1 is now null
    if (!ptr1) std::cout << "ptr1 is null.\n"; 
    ptr2->show(); // Output: Data: 100

    return 0;
}
