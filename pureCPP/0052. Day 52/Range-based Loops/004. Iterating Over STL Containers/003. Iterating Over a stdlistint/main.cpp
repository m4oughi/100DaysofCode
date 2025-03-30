#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
