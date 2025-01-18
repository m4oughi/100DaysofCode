#include <iostream>
#include <iterator>

class CustomOutputIterator {
public:
    void operator=(int value) {
        std::cout << "[" << value << "] ";
    }

    CustomOutputIterator& operator*() { return *this; }
    CustomOutputIterator& operator++() { return *this; }
    CustomOutputIterator operator++(int) { return *this; }
};

int main() {
    CustomOutputIterator out;
    for (int i = 1; i <= 5; ++i) {
        *out = i;
    }

    return 0;
}
