#include <iostream>
#include <tuple>

constexpr auto createTuple() {
    return std::make_tuple(10, 20, 30);
}

int main() {
    constexpr auto myTuple = createTuple();
    std::cout << "Tuple first element: " << std::get<0>(myTuple) << std::endl; // Output: 10
    return 0;
}
