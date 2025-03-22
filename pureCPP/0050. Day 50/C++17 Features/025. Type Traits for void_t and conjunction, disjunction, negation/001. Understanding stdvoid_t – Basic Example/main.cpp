#include <iostream>
#include <type_traits>

// Primary template: Assume type is invalid by default
template <typename, typename = std::void_t<>>
struct HasTypeAlias : std::false_type {};

// Specialization: If T has a type alias `type`, mark it as true
template <typename T>
struct HasTypeAlias<T, std::void_t<typename T::type>> : std::true_type {};

// Example structs
struct WithAlias { using type = int; };
struct WithoutAlias {};

int main() {
    std::cout << std::boolalpha;
    std::cout << "WithAlias has type alias: " << HasTypeAlias<WithAlias>::value << "\n";
    std::cout << "WithoutAlias has type alias: " << HasTypeAlias<WithoutAlias>::value << "\n";
    return 0;
}
