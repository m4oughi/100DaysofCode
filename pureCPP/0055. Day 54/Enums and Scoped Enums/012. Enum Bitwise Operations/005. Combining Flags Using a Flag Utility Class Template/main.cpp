#include <iostream>
#include <type_traits>

template<typename E>
struct Flags {
    using underlying = typename std::underlying_type<E>::type;
    underlying value;

    Flags() : value(0) {}
    Flags(E e) : value(static_cast<underlying>(e)) {}

    Flags operator|(E e) const { return Flags(value | static_cast<underlying>(e)); }
    bool has(E e) const { return value & static_cast<underlying>(e); }
};

enum class Ability : uint8_t {
    Jump = 1 << 0,
    Shoot = 1 << 1,
    Fly = 1 << 2
};

int main() {
    Flags<Ability> abilities = Ability::Jump | Ability::Fly;

    if (abilities.has(Ability::Fly)) {
        std::cout << "Character can fly!\n";
    }
}
