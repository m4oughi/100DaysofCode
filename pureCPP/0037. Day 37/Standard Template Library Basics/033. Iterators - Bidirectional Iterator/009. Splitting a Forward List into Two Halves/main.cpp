#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5, 6};
    std::forward_list<int> firstHalf, secondHalf;

    auto mid = numbers.begin();
    std::advance(mid, 3);

    firstHalf.assign(numbers.begin(), mid);
    secondHalf.assign(mid, numbers.end());

    std::cout << "First half: ";
    for (int num : firstHalf) {
        std::cout << num << " ";
    }

    std::cout << "\nSecond half: ";
    for (int num : secondHalf) {
        std::cout << num << " ";
    }

    std::cout << "\n";

    return 0;
}
