#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers;

    for (int i = 1; i <= 5; ++i) {
        numbers.push_front(i); // Insert elements at the front
    }

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
