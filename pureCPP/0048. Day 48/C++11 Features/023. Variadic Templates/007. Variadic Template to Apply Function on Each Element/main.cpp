#include <iostream>

template <typename Func, typename... Args>
void apply(Func f, Args... args) {
    (f(args), ...);
}

void printInt(int x) {
    std::cout << "Value: " << x << std::endl;
}

int main() {
    apply(printInt, 10, 20, 30, 40);
    return 0;
}
