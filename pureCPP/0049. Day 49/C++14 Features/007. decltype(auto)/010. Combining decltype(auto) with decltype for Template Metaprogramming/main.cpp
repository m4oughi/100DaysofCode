#include <iostream>
#include <type_traits>

template<typename T, typename U>
decltype(auto) add(T&& a, U&& b) {
    return std::forward<T>(a) + std::forward<U>(b);
}

int main() {
    int x = 5;
    double y = 10.5;
    
    std::cout << "Sum: " << add(x, y) << std::endl; // Output: 15.5
    return 0;
}
