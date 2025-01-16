#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3};
    numbers.push_front(0);  // Add to the front
    numbers.push_back(4);   // Add to the back

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
