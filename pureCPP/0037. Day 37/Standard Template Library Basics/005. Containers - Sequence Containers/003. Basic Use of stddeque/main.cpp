#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3};
    numbers.push_front(0); // Insert at the beginning
    numbers.push_back(4);  // Insert at the end

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
