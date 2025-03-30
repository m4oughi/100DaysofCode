#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {100, 200, 300, 400};

    for (const int& num : numbers) { // Read-only access
        std::cout << num << " ";
    }

    return 0;
}
