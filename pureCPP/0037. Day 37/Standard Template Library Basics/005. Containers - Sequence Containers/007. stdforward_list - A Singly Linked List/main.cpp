#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30};
    numbers.push_front(5); // Insert at the front

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
