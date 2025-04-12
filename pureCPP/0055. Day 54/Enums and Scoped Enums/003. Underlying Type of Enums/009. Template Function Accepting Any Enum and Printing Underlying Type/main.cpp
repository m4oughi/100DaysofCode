#include <iostream>
#include <type_traits>

template<typename E>
void printEnumValue(E e) {
    static_assert(std::is_enum<E>::value, "E must be an enum");
    std::cout << "Underlying value: " << static_cast<typename std::underlying_type<E>::type>(e) << "\n";
}

enum class Event : short { Click = 1, Hover = 2 };

int main() {
    printEnumValue(Event::Hover);
}
