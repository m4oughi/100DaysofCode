#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);
        std::cout << "Size after inserting " << i << ": " << numbers.size() << std::endl;
    }

    return 0;
}
