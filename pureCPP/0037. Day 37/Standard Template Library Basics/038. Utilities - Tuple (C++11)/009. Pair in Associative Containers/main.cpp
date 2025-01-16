#include <iostream>
#include <map>
#include <utility>

int main() {
    std::map<int, std::pair<std::string, double>> products = {
        {1, {"Laptop", 999.99}},
        {2, {"Smartphone", 499.99}},
        {3, {"Tablet", 299.99}}
    };

    for (const auto& product : products) {
        std::cout << "Product ID: " << product.first
                  << ", Name: " << product.second.first
                  << ", Price: $" << product.second.second << "\n";
    }

    return 0;
}
