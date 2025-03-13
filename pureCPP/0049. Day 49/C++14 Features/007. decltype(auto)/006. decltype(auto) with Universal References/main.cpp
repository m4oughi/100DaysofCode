#include <iostream>

template<typename T>
decltype(auto) forwardValue(T&& val) {
    return std::forward<T>(val);
}

int main() {
    int x = 5;
    std::cout << "Forwarded value: " << forwardValue(x) << std::endl;
    std::cout << "Forwarded rvalue: " << forwardValue(10) << std::endl;
    return 0;
}
