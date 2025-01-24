#include <iostream>
#include <vector>
#include <algorithm>

struct Product {
    std::string name;
    double price;
};

int main() {
    std::vector<Product> products = {{"Laptop", 1500.0}, {"Phone", 800.0}, {"Tablet", 600.0}, {"Monitor", 300.0}};

    std::stable_partition(products.begin(), products.end(), [](const Product& p) { return p.price >= 1000.0; });

    std::cout << "Expensive products:\n";
    for (const auto& product : products) {
        if (product.price >= 1000.0) std::cout << product.name << " ($" << product.price << ")\n";
    }

    std::cout << "\nAffordable products:\n";
    for (const auto& product : products) {
        if (product.price < 1000.0) std::cout << product.name << " ($" << product.price << ")\n";
    }

    return 0;
}
