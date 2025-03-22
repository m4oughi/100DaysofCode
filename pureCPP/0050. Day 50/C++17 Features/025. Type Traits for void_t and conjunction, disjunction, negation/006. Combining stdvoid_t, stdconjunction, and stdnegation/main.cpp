#include <iostream>
#include <type_traits>

template <typename, typename = std::void_t<>>
struct HasSizeMethod : std::false_type {};

template <typename T>
struct HasSizeMethod<T, std::void_t<decltype(std::declval<T>().size())>> : std::true_type {};

template <typename T>
struct HasDataMethod {
    template <typename U> static auto test(int) -> decltype(std::declval<U>().data(), std::true_type{});
    template <typename> static std::false_type test(...);
    static constexpr bool value = decltype(test<T>(0))::value;
};

// Check if a type does NOT have both size() and data()
template <typename T>
using IsInvalidContainer = std::negation<std::conjunction<HasSizeMethod<T>, std::bool_constant<HasDataMethod<T>::value>>>;

struct ValidContainer { void size() {}; void data() {}; };
struct InvalidContainer { void size() {}; };

int main() {
    std::cout << "ValidContainer is invalid: " << IsInvalidContainer<ValidContainer>::value << "\n";
    std::cout << "InvalidContainer is invalid: " << IsInvalidContainer<InvalidContainer>::value << "\n";
    return 0;
}
