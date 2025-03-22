#include <iostream>
#include <any>

int main() {
    std::any value = 42;
    
    std::cout << "Value before reset: " << std::any_cast<int>(value) << '\n';
    value.reset();
    
    if (!value.has_value()) {
        std::cout << "Value has been reset.\n";
    }

    return 0;
}
