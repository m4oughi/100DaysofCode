#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5};
    numbers.pop_front(); // Remove from the front
    numbers.pop_back();  // Remove from the back

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
