#include <iostream>

class ArrayWrapper {
public:
    constexpr ArrayWrapper() : data{1, 2, 3, 4, 5} {}

    constexpr int getValue(int index) const { return data[index]; }

private:
    int data[5];
};

int main() {
    constexpr ArrayWrapper arr;
    constexpr int val = arr.getValue(2);  // ✅ Compile-time access

    std::cout << "Value at index 2: " << val << '\n';
}
