#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 4, 5};

    auto it = numbers.begin() + 2; // Iterator to the third position
    numbers.insert(it, 3);         // Insert 3 at the third position

    it = numbers.begin() + 1;
    numbers.erase(it);             // Erase the second element

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
