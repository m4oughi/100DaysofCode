#include <iostream>
#include <tuple>

std::tuple<int, double, char> getValues() {
    return {42, 2.718, 'X'};
}

int main() {
    auto [num, pi, ch] = getValues();  // Function returning multiple values

    std::cout << "num: " << num << ", pi: " << pi << ", ch: " << ch << '\n';
    return 0;
}
