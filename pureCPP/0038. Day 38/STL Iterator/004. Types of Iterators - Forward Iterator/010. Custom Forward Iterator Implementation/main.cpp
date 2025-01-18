#include <iostream>
#include <iterator>

class CustomForwardIterator {
    int current;
    int max;

public:
    CustomForwardIterator(int start, int end) : current(start), max(end) {}

    int operator*() const { return current; }

    CustomForwardIterator& operator++() {
        if (current < max) ++current;
        return *this;
    }

    bool operator!=(const CustomForwardIterator& other) const {
        return current != other.current;
    }
};

int main() {
    CustomForwardIterator it(1, 6);
    CustomForwardIterator end(6, 6);

    while (it != end) {
        std::cout << *it << " ";
        ++it;
    }

    return 0;
}
