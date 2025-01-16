#include <iostream>
#include <deque>
#include <algorithm>

bool descending(int a, int b) {
    return a > b;
}

int main() {
    std::deque<int> numbers = {4, 1, 5, 3, 2};

    std::sort(numbers.begin(), numbers.end(), descending); // Sort in descending order

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
