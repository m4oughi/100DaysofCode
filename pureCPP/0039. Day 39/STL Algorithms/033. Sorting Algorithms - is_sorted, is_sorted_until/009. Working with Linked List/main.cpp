#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> numbers = {1, 3, 5, 7, 6};

    if (std::is_sorted(numbers.begin(), numbers.end())) {
        std::cout << "The linked list is sorted.\n";
    } else {
        std::cout << "The linked list is not sorted.\n";
    }
    return 0;
}
