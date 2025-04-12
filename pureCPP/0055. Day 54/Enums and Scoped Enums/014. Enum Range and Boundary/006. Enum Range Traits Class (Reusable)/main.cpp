#include <iostream>
#include <type_traits>

enum class Command {
    Start,
    Stop,
    Pause,
    Resume,
    Count
};

template<typename E>
struct EnumTraits;

template<>
struct EnumTraits<Command> {
    static constexpr Command first = Command::Start;
    static constexpr Command last  = static_cast<Command>(static_cast<int>(Command::Count) - 1);
};

int main() {
    using underlying = std::underlying_type<Command>::type;
    for (underlying i = static_cast<underlying>(EnumTraits<Command>::first);
         i <= static_cast<underlying>(EnumTraits<Command>::last); ++i) {
        std::cout << "Command: " << i << "\n";
    }
}
