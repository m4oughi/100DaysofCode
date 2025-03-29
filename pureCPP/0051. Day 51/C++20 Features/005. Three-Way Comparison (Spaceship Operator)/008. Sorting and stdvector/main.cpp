#include <iostream>
#include <vector>
#include <algorithm>
#include <compare>

class Product {
public:
    std::string name;
    double price;

    auto operator<=>(const Product& other) const {
        return price <=> other.price;
    }
};

int main() {
    std::vector<Product> products = {
        {"Laptop", 999.99},
        {"Smartphone", 699.99},
        {"Headphones", 199.99}
    };

    std::sort(products.begin(), products.end());

    for (const auto& p : products)
        std::cout << p.name << " - $" << p.price << "\n";
}
