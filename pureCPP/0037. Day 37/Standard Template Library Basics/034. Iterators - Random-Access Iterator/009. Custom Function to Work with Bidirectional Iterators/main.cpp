#include <iostream>
#include <list>
#include <algorithm>

template <typename BidirectionalIterator>
void printReverse(BidirectionalIterator begin, BidirectionalIterator end) {
    while (begin != end) {
        --end;
        std::cout << *end << " ";
    }
}

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Custom reverse print: ";
    printReverse(numbers.begin(), numbers.end());
    std::cout << "\n";

    return 0;
}
