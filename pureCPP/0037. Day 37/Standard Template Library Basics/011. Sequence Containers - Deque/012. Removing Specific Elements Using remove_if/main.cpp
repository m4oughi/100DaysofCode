#include <iostream>
#include <deque>
#include <algorithm>

bool isOdd(int n) {
    return n % 2 != 0;
}

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5, 6};

    auto newEnd = std::remove_if(numbers.begin(), numbers.end(), isOdd);
    numbers.erase(newEnd, numbers.end()); // Erase the removed elements

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
