#include <iostream>

class Product {
private:
    std::string name;
    double price;

public:
    Product(std::string n, double p) : name(n), price(p) {}

    void display() const {
        std::cout << "Product Name: " << name << ", Price: $" << price << std::endl;
    }
};

class ProductFactory {
public:
    // Static member function for creating objects
    static Product createProduct(const std::string& name, double price) {
        return Product(name, price);
    }
};

int main() {
    Product product1 = ProductFactory::createProduct("Laptop", 1200.50);
    product1.display();

    Product product2 = ProductFactory::createProduct("Smartphone", 799.99);
    product2.display();

    return 0;
}
