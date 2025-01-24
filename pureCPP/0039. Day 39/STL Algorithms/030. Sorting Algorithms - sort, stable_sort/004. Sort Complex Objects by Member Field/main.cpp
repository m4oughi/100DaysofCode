#include <iostream>
#include <vector>
#include <algorithm>

struct Product {
    std::string name;
    double price;
};

int main() {
    std::vector<Product> products = {
        {"Laptop", 1500.0}, {"Phone", 800.0}, {"Tablet", 600.0}, {"Monitor", 300.0}
    };

    std::sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
        return a.price < b.price;
    });

    std::cout << "Products sorted by price: ";
    for (const auto& product : products) {
        std::cout << product.name << " ($" << product.price << ") ";
    }
    return 0;
}
