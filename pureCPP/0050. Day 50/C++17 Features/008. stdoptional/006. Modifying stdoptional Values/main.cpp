#include <iostream>
#include <optional>

void increment(std::optional<int>& opt) {
    if (opt) *opt += 1;
}

int main() {
    std::optional<int> value = 10;

    increment(value);
    std::cout << "Incremented: " << value.value() << '\n';

    std::optional<int> empty;
    increment(empty); // No change

    return 0;
}
