#include <iostream>

struct Wrapper {
    int& ref;

    // Member initializer list for a reference member
    Wrapper(int& r) : ref(r) {}
};

int main() {


    return 0;
}