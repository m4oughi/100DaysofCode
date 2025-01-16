#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30};
    numbers.push_front(5); // Insert at the front
    numbers.push_back(40); // Insert at the back

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
