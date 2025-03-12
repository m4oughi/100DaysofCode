#include <iostream>

class Laptop {
    std::string brand;
    int ram;
    double price;
public:
    Laptop(std::string b, int r) : Laptop(b, r, 500.0) {} // Delegating constructor

    Laptop(std::string b, int r, double p) : brand(b), ram(r), price(p) {}

    void specs() const {
        std::cout << "Brand: " << brand << ", RAM: " << ram << "GB, Price: $" << price << std::endl;
    }
};

int main() {
    Laptop l1("Dell", 8); // Uses delegating constructor
    Laptop l2("Apple", 16, 1200.0);

    l1.specs();
    l2.specs();

    return 0;
}
