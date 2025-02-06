#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    while (!numbers.empty()) {
        std::cout << "Front: " << numbers.front() << ", Back: " << numbers.back() << std::endl;
        numbers.pop_front(); // Remove from the front
        if (!numbers.empty()) {
            numbers.pop_back(); // Remove from the back
        }
    }

    return 0;
}
