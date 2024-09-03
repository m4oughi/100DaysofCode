#include <iostream>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int index = 7;

    // Manually check boundaries before access
    if (index >= 0 && index < 5)
    {
        std::cout << "Element at index " << index << ": " << numbers[index] << std::endl;
    }
    else
    {
        std::cerr << "Error: Index " << index << " is out of bounds!" << std::endl;
    }
}