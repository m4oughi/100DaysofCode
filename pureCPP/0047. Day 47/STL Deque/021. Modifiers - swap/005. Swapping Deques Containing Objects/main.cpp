#include <iostream>
#include <deque>

class Product {
public:
    std::string name;
    double price;

    Product(std::string n, double p) : name(std::move(n)), price(p) {}

    void display() const {
        std::cout << name << " - $" << price << "\n";
    }
};

int main() {
    std::deque<Product> shop1 = { {"Laptop", 1200.50}, {"Phone", 699.99} };
    std::deque<Product> shop2 = { {"Tablet", 499.99}, {"Monitor", 199.99} };

    shop1.swap(shop2);

    std::cout << "Shop1 products after swap:\n";
    for (const auto& p : shop1) p.display();

    std::cout << "\nShop2 products after swap:\n";
    for (const auto& p : shop2) p.display();

    return 0;
}
