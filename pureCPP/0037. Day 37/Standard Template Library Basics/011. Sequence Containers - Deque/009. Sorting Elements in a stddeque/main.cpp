#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> numbers = {4, 1, 5, 3, 2};

    std::sort(numbers.begin(), numbers.end()); // Sort the deque

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
