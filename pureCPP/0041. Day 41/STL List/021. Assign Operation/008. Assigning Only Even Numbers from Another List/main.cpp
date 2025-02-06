#include <iostream>
#include <list>

int main() {
    std::list<int> original = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list<int> evenNumbers;

    for (int num : original) {
        if (num % 2 == 0)
            evenNumbers.push_back(num);
    }

    std::cout << "Even numbers list: ";
    for (int num : evenNumbers) std::cout << num << " ";

    return 0;
}
