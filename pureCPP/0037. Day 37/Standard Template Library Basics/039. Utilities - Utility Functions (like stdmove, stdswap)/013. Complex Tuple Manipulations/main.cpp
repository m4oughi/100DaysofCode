#include <iostream>
#include <tuple>
#include <algorithm>

int main() {
    std::tuple<int, char, double> t(42, 'Z', 3.14159);

    // Access elements with std::get
    int num = std::get<0>(t);
    char ch = std::get<1>(t);
    double pi = std::get<2>(t);

    // Reverse elements in tuple
    auto reversed = std::make_tuple(pi, ch, num);

    std::cout << "Original Tuple: " << num << ", " << ch << ", " << pi << "\n";
    std::cout << "Reversed Tuple: " << std::get<0>(reversed) << ", " << std::get<1>(reversed) << ", " << std::get<2>(reversed) << "\n";

    return 0;
}
