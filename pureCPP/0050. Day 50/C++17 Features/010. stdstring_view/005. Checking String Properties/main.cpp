#include <iostream>
#include <string_view>

int main() {
    std::string_view view = "C++17 Features";

    std::cout << "Size: " << view.size() << '\n';
    std::cout << "Is empty: " << (view.empty() ? "Yes" : "No") << '\n';

    return 0;
}
