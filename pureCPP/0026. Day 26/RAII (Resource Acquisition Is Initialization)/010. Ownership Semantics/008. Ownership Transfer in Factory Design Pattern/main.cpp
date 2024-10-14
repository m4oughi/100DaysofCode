#include <iostream>
#include <memory>

class Product {
public:
    Product() { std::cout << "Product created." << std::endl; }
    ~Product() { std::cout << "Product destroyed." << std::endl; }
};

std::unique_ptr<Product> createProduct() {
    return std::make_unique<Product>();  // Transfer ownership to the caller.
}

int main() {
    std::unique_ptr<Product> product = createProduct();  // Ownership transferred.
    std::cout << "Product is in use." << std::endl;
}  // Product is automatically destroyed when `product` goes out of scope.
