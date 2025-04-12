#include <iostream>
#include <string>

enum Fruit { Apple, Banana, Orange, Count };

const std::string fruitNames[Count] = { "Apple", "Banana", "Orange" };

int main() {
    Fruit f = Banana;
    std::cout << "Selected fruit: " << fruitNames[f] << "\n";
}
