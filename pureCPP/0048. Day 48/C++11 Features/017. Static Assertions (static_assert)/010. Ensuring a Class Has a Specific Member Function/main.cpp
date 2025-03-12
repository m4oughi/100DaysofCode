#include <iostream>
#include <type_traits>

class A {
public:
    void func() {}
};

template <typename T>
class CheckFunction {
private:
    template <typename U>
    static auto test(int) -> decltype(std::declval<U>().func(), std::true_type());

    template <typename>
    static std::false_type test(...);

public:
    static constexpr bool value = decltype(test<T>(0))::value;
};

static_assert(CheckFunction<A>::value, "Class must have a 'func' member function");

int main() {
    std::cout << "Class function existence check passed!\n";
    return 0;
}
