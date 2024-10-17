#include <iostream>
#include <type_traits>
#include <utility>

class MyClass {
public:
    MyClass() = default;
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor\n"; }
};

template <typename T>
void my_swap(T& a, T& b) {
    static_assert(std::is_move_constructible<T>::value, "T must be move constructible");
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

int main() {
    MyClass obj1, obj2;
    my_swap(obj1, obj2);  // Will compile because MyClass is move constructible
}
