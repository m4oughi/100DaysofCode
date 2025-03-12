#include <iostream>

template <typename... Args>
void forwardPrint(Args&&... args) {
    print(std::forward<Args>(args)...);
}

int main() {
    std::string str = "Hello";
    forwardPrint(1, str, std::move(str), 3.14);
    return 0;
}
