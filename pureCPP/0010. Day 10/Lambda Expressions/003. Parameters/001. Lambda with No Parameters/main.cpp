#include <iostream>

int main() {
    // Lambda with no parameters
    auto noParams = []() {
        std::cout << "This lambda has no parameters." << std::endl;
    };
    noParams();
    return 0;
}
