#include <iostream>

struct Counter {
    int value;

    // Pre-increment operator
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Post-increment operator
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }
};

int main() {


    return 0;
}