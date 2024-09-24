#include <iostream>

struct Counter {
    mutable int count;

    Counter() : count(0) {}

    void increment() const {
        ++count;
    }
};


int main() {

    return 0;
}