#include <iostream>
#include <cmath>

int main() {
    double n = 5.0; 
    std::cout << "ln(5!) = " << std::lgamma(n + 1) << "\n";

    return 0;
}
