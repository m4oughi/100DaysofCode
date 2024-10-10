#include <iostream>
using namespace std;

// Abstract Base Class
class Product {
public:
    virtual void use() = 0;  // Pure virtual function
};

class ProductA : public Product {
public:
    void use() override {
        cout << "Using Product A" << endl;
    }
};

class ProductB : public Product {
public:
    void use() override {
        cout << "Using Product B" << endl;
    }
};

class ProductFactory {
public:
    static Product* createProduct(char type) {
        if (type == 'A') {
            return new ProductA();
        } else if (type == 'B') {
            return new ProductB();
        }
        return nullptr;
    }
};

int main() {
    Product* product = ProductFactory::createProduct('A');
    if (product) {
        product->use();  // Outputs "Using Product A"
        delete product;
    }

    product = ProductFactory::createProduct('B');
    if (product) {
        product->use();  // Outputs "Using Product B"
        delete product;
    }

    return 0;
}
