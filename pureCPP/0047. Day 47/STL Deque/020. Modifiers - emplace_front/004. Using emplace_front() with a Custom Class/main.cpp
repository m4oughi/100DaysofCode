#include <iostream>
#include <deque>

class Product {
public:
    std::string name;
    double price;

    Product(const std::string& n, double p) : name(n), price(p) {
        std::cout << "Constructing Product: " << name << " - $" << price << "\n";
    }
};

int main() {
    std::deque<Product> products;

    products.emplace_front("Laptop", 1200.50);
    products.emplace_front("Phone", 699.99);

    std::cout << "Product List:\n";
    for (const auto& p : products)
        std::cout << p.name << " - $" << p.price << "\n";

    return 0;
}
