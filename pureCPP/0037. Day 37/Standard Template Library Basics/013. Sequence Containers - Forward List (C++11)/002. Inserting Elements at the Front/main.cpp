#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers;
    numbers.push_front(1);
    numbers.push_front(2);
    numbers.push_front(3);  // Inserting elements at the front

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
