#include <iostream>
#include <string_view>

int main() {
    std::string_view view = "Iteration";

    for (char ch : view) {
        std::cout << ch << ' ';
    }

    return 0;
}
