#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5, 6};

    numbers.remove_if([](int x) { return x % 2 == 0; }); // Remove even numbers

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
