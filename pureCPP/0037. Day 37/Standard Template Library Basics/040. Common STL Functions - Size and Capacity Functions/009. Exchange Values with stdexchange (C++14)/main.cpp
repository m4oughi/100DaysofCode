#include <iostream>
#include <utility>

int main() {
    int oldValue = 42;
    int newValue = std::exchange(oldValue, 100);

    std::cout << "Old Value: " << oldValue << "\n";
    std::cout << "New Value: " << newValue << "\n";

    return 0;
}
