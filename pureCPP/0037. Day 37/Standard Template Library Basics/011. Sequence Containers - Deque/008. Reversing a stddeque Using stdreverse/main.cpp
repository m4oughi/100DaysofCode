#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    std::reverse(numbers.begin(), numbers.end()); // Reverse the deque

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
