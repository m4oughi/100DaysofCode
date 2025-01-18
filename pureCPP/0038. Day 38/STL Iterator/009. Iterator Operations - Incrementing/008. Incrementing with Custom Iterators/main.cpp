#include <iostream>
#include <vector>

class CustomIterator {
    int* ptr;

public:
    explicit CustomIterator(int* p) : ptr(p) {}

    CustomIterator& operator++() {
        ++ptr; // Pre-increment
        return *this;
    }

    CustomIterator operator++(int) {
        CustomIterator temp = *this;
        ++ptr; // Post-increment
        return temp;
    }

    int& operator*() { return *ptr; }

    bool operator!=(const CustomIterator& other) const {
        return ptr != other.ptr;
    }
};

int main() {
    int numbers[] = {10, 20, 30, 40};
    CustomIterator start(numbers);
    CustomIterator end(numbers + 4);

    std::cout << "Custom iterator with increment: ";
    for (auto it = start; it != end; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
