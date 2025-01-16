#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it += 5; // Increment each element by 5
    }

    std::cout << "Modified forward list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
