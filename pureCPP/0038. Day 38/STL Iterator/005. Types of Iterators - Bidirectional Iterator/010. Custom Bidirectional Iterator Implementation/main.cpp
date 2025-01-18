#include <iostream>
#include <iterator>

class BidirectionalIterator {
    int* current;

public:
    explicit BidirectionalIterator(int* ptr) : current(ptr) {}

    int& operator*() { return *current; }
    BidirectionalIterator& operator++() { ++current; return *this; }
    BidirectionalIterator operator++(int) { BidirectionalIterator temp = *this; ++current; return temp; }
    BidirectionalIterator& operator--() { --current; return *this; }
    BidirectionalIterator operator--(int) { BidirectionalIterator temp = *this; --current; return temp; }
    bool operator!=(const BidirectionalIterator& other) const { return current != other.current; }
};

int main() {
    int data[] = {1, 2, 3, 4, 5};

    BidirectionalIterator begin(data);
    BidirectionalIterator end(data + 5);

    std::cout << "Forward: ";
    for (auto it = begin; it != end; ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\nBackward: ";
    for (auto it = end - 1; it != begin - 1; --it) {
        std::cout << *it << " ";
    }

    return 0;
}
