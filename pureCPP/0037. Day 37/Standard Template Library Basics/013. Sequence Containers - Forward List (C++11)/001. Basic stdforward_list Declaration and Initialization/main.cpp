#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}