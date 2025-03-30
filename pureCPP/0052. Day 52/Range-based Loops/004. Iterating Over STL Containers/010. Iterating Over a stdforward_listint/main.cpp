#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40};

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
