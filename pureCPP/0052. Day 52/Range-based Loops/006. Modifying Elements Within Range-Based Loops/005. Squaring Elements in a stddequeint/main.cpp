#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    for (int& num : numbers) {
        num *= num;
    }

    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
