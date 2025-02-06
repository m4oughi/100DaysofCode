#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    int temp = numbers.front();
    numbers.front() = numbers.back();
    numbers.back() = temp;

    std::cout << "After swapping - Front: " << numbers.front() << ", Back: " << numbers.back() << std::endl;

    return 0;
}
