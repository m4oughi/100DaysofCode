#include <iostream>
#include <string_view>

std::string_view getTemporaryStringView() {
    std::string str = "Temporary";
    return std::string_view(str);  // Undefined behavior! Dangling view.
}

int main() {
    std::string_view view = getTemporaryStringView();
    std::cout << view << '\n';  // Undefined behavior

    return 0;
}
