#include <iostream>

int main() {
    const int num = 10;
    int& nonConstNum = const_cast<int&>(num); // Removing constness

    nonConstNum = 20; // Modifying the value
    std::cout << "num: " << num << std::endl; // Prints 20 (undefined behavior, but shows the modification)
}
