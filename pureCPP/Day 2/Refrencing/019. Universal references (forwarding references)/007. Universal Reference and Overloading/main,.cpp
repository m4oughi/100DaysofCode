#include <iostream>

template<typename T>
void call(T&& value) {
    process(std::forward<T>(value));
}

void process(int& value) {
    std::cout << "Processing lvalue int: " << value << std::endl;
}

void process(int&& value) {
    std::cout << "Processing rvalue int: " << value << std::endl;
}

int main() {
    int x = 30;
    call(x);        // lvalue, calls process(int&)
    call(40);       // rvalue, calls process(int&&)

    return 0;
}
