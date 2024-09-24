#include <iostream>
#include <utility>  // For std::forward

template<typename T>
void log(T&& value) {
    process(std::forward<T>(value));
}

void process(int& value) {
    std::cout << "lvalue processed: " << value << std::endl;
}

void process(int&& value) {
    std::cout << "rvalue processed: " << value << std::endl;
}

int main() {
    int x = 100;
    log(x);      // lvalue, calls process(int&)
    log(200);    // rvalue, calls process(int&&)

    return 0;
}
