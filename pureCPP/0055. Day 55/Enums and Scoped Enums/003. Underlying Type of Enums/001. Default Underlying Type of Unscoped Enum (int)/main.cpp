#include <iostream>

enum Temperature { Cold, Warm, Hot }; // Underlying type is int by default

int main() {
    Temperature t = Hot;
    std::cout << "Hot value (int): " << t << std::endl;
}
