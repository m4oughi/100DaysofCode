#include <iostream>
#include <type_traits>

struct A { using type = int; };
struct B { void foo() {} };

template <typename T>
struct HasTypeAlias : std::is_same<typename T::type, int> {};  // Check if `type` exists and is `int`

template <typename T>
struct HasFooMethod {
    template <typename U> static auto test(int) -> decltype(std::declval<U>().foo(), std::true_type{});
    template <typename> static std::false_type test(...);
    static constexpr bool value = decltype(test<T>(0))::value;
};

template <typename T>
using IsValidType = std::conjunction<HasTypeAlias<T>, std::bool_constant<HasFooMethod<T>::value>>;

int main() {
    std::cout << "A is valid type: " << IsValidType<A>::value << "\n";
    std::cout << "B is valid type: " << IsValidType<B>::value << "\n";
    return 0;
}
