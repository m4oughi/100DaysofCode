#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, char, float> myTuple = std::make_tuple(42, 'A', 2.718);

    int a;
    char b;
    float c;

    std::tie(a, b, c) = myTuple; // Unpacking tuple

    std::cout << "Unpacked Values: " << a << ", " << b << ", " << c << std::endl;

    return 0;
}
