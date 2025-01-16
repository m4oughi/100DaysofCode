#include <iostream>
#include <list>

bool isOdd(int n) {
    return n % 2 != 0;
}

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5, 6};

    numbers.remove_if(isOdd); // Remove all odd numbers

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
