#include <iostream>
#include <type_traits>

struct A { using type = int; };
struct B { void foo() {} };

template <typename T>
struct HasTypeAlias : std::is_same<typename T::type, int> {};  

template <typename T>
struct HasFooMethod {
    template <typename U> static auto test(int) -> decltype(std::declval<U>().foo(), std::true_type{});
    template <typename> static std::false_type test(...);
    static constexpr bool value = decltype(test<T>(0))::value;
};

template <typename T>
using HasEitherProperty = std::disjunction<HasTypeAlias<T>, std::bool_constant<HasFooMethod<T>::value>>;

int main() {
    std::cout << "A has either property: " << HasEitherProperty<A>::value << "\n";
    std::cout << "B has either property: " << HasEitherProperty<B>::value << "\n";
    return 0;
}
