#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {10, 20, 30, 40};

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
