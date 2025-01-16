#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_front(0);  // Insert at the front
    numbers.push_front(-1); // Insert at the front

    numbers.pop_back();     // Remove from the back
    numbers.pop_front();    // Remove from the front

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
