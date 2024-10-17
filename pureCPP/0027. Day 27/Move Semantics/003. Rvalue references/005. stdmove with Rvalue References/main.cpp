#include <iostream>
#include <utility>

void process(int &&rref) {
    std::cout << "Rvalue reference: " << rref << std::endl;
}

int main() {
    int x = 42;
    process(std::move(x));  // std::move forces x to be treated as an Rvalue

    return 0;
}
