#include <iostream>
#include <vector>
#include <iterator>

class CustomInputIterator {
    int current;
    int max;

public:
    CustomInputIterator(int start, int end) : current(start), max(end) {}

    int operator*() const { return current; }

    CustomInputIterator& operator++() {
        if (current < max) ++current;
        return *this;
    }

    bool operator!=(const CustomInputIterator& other) const {
        return current != other.current;
    }
};

int main() {
    CustomInputIterator it(1, 6);
    CustomInputIterator end(6, 6);

    while (it != end) {
        std::cout << *it << " ";
        ++it;
    }

    return 0;
}
