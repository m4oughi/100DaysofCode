#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};

    for (int& num : numbers) {
        if (num % 2 != 0) {
            num *= 2;
        }
    }

    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
