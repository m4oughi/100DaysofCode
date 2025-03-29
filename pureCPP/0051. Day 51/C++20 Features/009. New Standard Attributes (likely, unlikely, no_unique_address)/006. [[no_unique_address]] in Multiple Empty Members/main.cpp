#include <iostream>

struct Empty1 {};
struct Empty2 {};

struct Efficient {
    int data;
    [[no_unique_address]] Empty1 e1;
    [[no_unique_address]] Empty2 e2;
};

int main() {
    std::cout << "Size of Efficient struct: " << sizeof(Efficient) << "\n";
}
