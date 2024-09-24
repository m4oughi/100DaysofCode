#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(i);
    }

    std::cout << "Initial capacity: " << numbers.capacity() << std::endl;

    // Inserting elements
    for (int i = 10; i < 20; ++i) {
        numbers.insert(numbers.begin() + 1, i); // Insert at the second position
        std::cout << "Capacity after insert: " << numbers.capacity() << std::endl;
    }

    // Erasing elements
    for (int i = 0; i < 5; ++i) {
        numbers.erase(numbers.begin()); // Erase the first element
        std::cout << "Capacity after erase: " << numbers.capacity() << std::endl;
    }

    return 0;
}
