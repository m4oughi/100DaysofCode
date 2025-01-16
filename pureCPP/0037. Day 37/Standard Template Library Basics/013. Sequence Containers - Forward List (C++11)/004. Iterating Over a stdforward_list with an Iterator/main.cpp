#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {5, 10, 15, 20};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
