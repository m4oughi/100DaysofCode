#include <iostream>
#include <type_traits>

enum class Mode : char { Alpha, Beta, Gamma };

int main() {
    std::cout << "Underlying type of Mode is: "
              << typeid(std::underlying_type<Mode>::type).name() << std::endl;
}
