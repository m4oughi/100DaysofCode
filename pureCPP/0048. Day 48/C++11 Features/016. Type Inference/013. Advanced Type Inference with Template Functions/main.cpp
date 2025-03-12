#include <iostream>

template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}

int main() {
    std::cout << add(3, 4.5) << "\n";  // Infers double
    return 0;
}
