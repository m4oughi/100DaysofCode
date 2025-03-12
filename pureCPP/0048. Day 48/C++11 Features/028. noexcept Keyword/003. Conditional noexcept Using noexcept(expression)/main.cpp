#include <iostream>

void mightThrow() {
    throw std::runtime_error("Error!");
}

void noThrow() noexcept {}

template <typename Func>
void callFunction(Func func) noexcept(noexcept(func())) {
    func();
}

int main() {
    callFunction(noThrow); // Allowed
    callFunction(mightThrow); // Results in std::terminate()
    return 0;
}
