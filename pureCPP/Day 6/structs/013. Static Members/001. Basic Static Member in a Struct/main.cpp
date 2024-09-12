#include <iostream>

struct BasicStatic {
    static int counter;
};

int BasicStatic::counter = 0;

int main() {
    BasicStatic::counter = 10;
    std::cout << "Counter: " << BasicStatic::counter << std::endl;
}
