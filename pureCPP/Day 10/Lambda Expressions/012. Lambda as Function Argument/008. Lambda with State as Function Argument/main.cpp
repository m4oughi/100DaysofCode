#include <iostream>
#include <functional>

void modifyValue(int& value, const std::function<void(int&)>& modifier) {
    modifier(value); // Modify the value
}

int main() {
    int number = 10;
    modifyValue(number, [](int& n) {
        n *= 2;
    });
    std::cout << "Modified Value: " << number << std::endl; // Outputs: Modified Value: 20

    return 0;
}
