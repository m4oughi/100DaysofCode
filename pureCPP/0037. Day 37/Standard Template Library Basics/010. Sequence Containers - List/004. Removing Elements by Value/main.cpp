#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 2, 4, 2};
    numbers.remove(2); // Removes all instances of the value 2

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
