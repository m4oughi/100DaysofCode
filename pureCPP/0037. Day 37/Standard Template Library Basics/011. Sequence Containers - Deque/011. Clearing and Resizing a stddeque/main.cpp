#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    numbers.clear();       // Remove all elements
    numbers.resize(3, 10); // Resize to 3 elements, fill with 10

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
