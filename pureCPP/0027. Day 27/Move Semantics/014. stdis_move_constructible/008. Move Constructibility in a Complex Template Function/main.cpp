#include <iostream>
#include <type_traits>

template <typename T>
T create(T&& t) {
    static_assert(std::is_move_constructible<T>::value, "Type T must be move constructible");
    return std::forward<T>(t);
}

class MyClass {
public:
    MyClass() = default;
    MyClass(const MyClass&) = delete;
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor\n"; }
};

int main() {
    MyClass obj;
    MyClass obj2 = create(std::move(obj));  // Works because MyClass is move constructible
}
