#include <iostream>
#include <string>

int main() {
    auto lambdaMove = [str = std::string("Hello, World!")]() mutable {
        std::string result = std::move(str); // Move the captured string
        str.clear(); // Clear the original string after move
        return result;
    };

    std::cout << "Moved string: " << lambdaMove() << std::endl; // Outputs: Moved string: Hello, World!
    std::cout << "After move, string is empty: " << lambdaMove() << std::endl; // Outputs: After move, string is empty:
    return 0;
}
