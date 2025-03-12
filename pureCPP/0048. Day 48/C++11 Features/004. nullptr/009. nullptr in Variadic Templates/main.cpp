#include <iostream>

void checkNullptr() {
    std::cout << "No more arguments." << std::endl;
}

template <typename T, typename... Args>
void checkNullptr(T first, Args... args) {
    if (first == nullptr)
        std::cout << "A nullptr detected!" << std::endl;
    checkNullptr(args...);
}

int main() {
    int* ptr1 = nullptr;
    int value = 10;
    int* ptr2 = &value;

    checkNullptr(ptr1, ptr2, nullptr, 5);

    return 0;
}
