#include <iostream>

class Product {
private:
    Product(int id) : productId(id) {  // Private constructor
        std::cout << "Product created with ID: " << productId << std::endl;
    }

    int productId;

public:
    static Product createProduct(int id) {  // Factory method
        return Product(id);  // Accessing private constructor
    }
};

int main() {
    Product product1 = Product::createProduct(101);  // Object creation through factory method
    Product product2 = Product::createProduct(202);  // Another object creation
    return 0;
}
