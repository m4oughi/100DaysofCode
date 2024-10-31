#include <iostream>
#include <vector>
#include <stdexcept>

void addElement(std::vector<int>& vec, int value) {
    std::vector<int> temp = vec;  // Create a backup (strong exception safety)
    try {
        if (value < 0) {
            throw std::runtime_error("Negative value not allowed!");
        }
        temp.push_back(value);
        vec = temp;  // Commit changes only if no exception occurs
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    addElement(numbers, -1);  // Fails, but 'numbers' remains unchanged
    return 0;
}
