#include <iostream>
#include <utility>  // For std::move

int main() {
    int x = 50;
    int &&ref = std::move(x);  // Treat x as an R-value
    ref = 100;  // Modifies x to 100

    return 0;
}