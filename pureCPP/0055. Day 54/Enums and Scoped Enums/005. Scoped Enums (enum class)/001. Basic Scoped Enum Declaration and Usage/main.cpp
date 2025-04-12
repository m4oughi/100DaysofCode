#include <iostream>

enum class Fruit { Apple, Banana, Mango };

int main() {
    Fruit f = Fruit::Mango;
    if (f == Fruit::Mango) {
        std::cout << "It's a Mango!" << std::endl;
    }
}
