#include <iostream>
#include <tuple>
#include <utility>  // For std::forward

template<typename... Args>
void unpack(Args&&... args) {
    auto tuple = std::make_tuple(std::forward<Args>(args)...);
    // Access elements of the tuple
    std::cout << "Tuple elements:" << std::endl;
    std::apply([](auto&&... elements) {
        ((std::cout << elements << std::endl), ...);
    }, tuple);
}

int main() {
    int x = 1;
    unpack(x, 2, 3.5, "hello");  // lvalue and rvalues

    return 0;
}
