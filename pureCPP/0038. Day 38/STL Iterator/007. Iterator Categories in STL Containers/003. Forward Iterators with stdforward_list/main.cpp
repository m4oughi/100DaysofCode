#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40};

    std::cout << "Forward iteration through forward_list: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
