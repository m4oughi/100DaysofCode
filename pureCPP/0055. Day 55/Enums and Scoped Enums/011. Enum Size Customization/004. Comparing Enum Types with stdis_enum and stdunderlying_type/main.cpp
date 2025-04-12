#include <iostream>
#include <type_traits>

enum class Action : int8_t { Start = 1, Stop = 2 };

int main() {
    static_assert(std::is_enum<Action>::value, "Action must be an enum");
    std::cout << "Underlying type of Action: " 
              << typeid(std::underlying_type<Action>::type).name() << "\n";
}
