#include <iostream>
#include <vector>
#include <algorithm>

struct Product {
    std::string name;
    double price;
};

int main() {
    std::vector<Product> products = {{"Laptop", 1500.0}, {"Phone", 800.0}, {"Tablet", 600.0}, {"Monitor", 300.0}};
    std::stable_partition(products.begin(), products.end(), [](const Product& p) { return p.price > 1000.0; });

    auto it = std::partition_point(products.begin(), products.end(), [](const Product& p) { return p.price > 1000.0; });

    if (it != products.end()) {
        std::cout << "Partition point (first affordable product): " << it->name << " ($" << it->price << ")" << std::endl;
    } else {
        std::cout << "All products are expensive." << std::endl;
    }

    return 0;
}
