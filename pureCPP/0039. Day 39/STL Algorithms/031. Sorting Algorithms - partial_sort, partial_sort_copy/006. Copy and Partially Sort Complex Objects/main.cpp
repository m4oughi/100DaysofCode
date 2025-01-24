#include <iostream>
#include <vector>
#include <algorithm>

struct Product {
    std::string name;
    double price;
};

int main() {
    std::vector<Product> products = {
        {"Laptop", 1500.0}, {"Phone", 800.0}, {"Tablet", 600.0}, {"Monitor", 300.0}, {"Keyboard", 100.0}
    };

    std::vector<Product> topProducts(3);

    std::partial_sort_copy(products.begin(), products.end(), topProducts.begin(), topProducts.end(),
        [](const Product& a, const Product& b) {
            return a.price > b.price;
        });

    std::cout << "Top 3 expensive products:\n";
    for (const auto& product : topProducts) {
        std::cout << product.name << ": $" << product.price << "\n";
    }
    return 0;
}
