#include <iostream>
#include <type_traits>

enum class Status {
    Ready,
    Processing,
    Done,
    Count
};

int main() {
    using underlying = std::underlying_type<Status>::type;

    for (underlying i = 0; i < static_cast<underlying>(Status::Count); ++i) {
        std::cout << "Status index: " << i << "\n";
    }
}
