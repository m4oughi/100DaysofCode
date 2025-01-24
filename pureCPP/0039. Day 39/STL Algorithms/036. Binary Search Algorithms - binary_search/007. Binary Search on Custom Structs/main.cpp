#include <iostream>
#include <vector>
#include <algorithm>

struct Product {
    int id;
    std::string name;

    bool operator<(const Product& other) const {
        return id < other.id;
    }
};

int main() {
    std::vector<Product> products = {{1, "Laptop"}, {2, "Phone"}, {3, "Tablet"}};
    Product target{2, ""};

    if (std::binary_search(products.begin(), products.end(), target)) {
        std::cout << "Product with ID " << target.id << " exists.\n";
    } else {
        std::cout << "Product with ID " << target.id << " does not exist.\n";
    }

    return 0;
}
