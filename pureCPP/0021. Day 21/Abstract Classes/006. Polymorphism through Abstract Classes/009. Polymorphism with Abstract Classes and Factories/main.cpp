#include <iostream>
using namespace std;

class Product {
public:
    virtual void useProduct() = 0;  // Pure virtual function
};

class ProductA : public Product {
public:
    void useProduct() override {
        cout << "Using Product A." << endl;
    }
};

class ProductB : public Product {
public:
    void useProduct() override {
        cout << "Using Product B." << endl;
    }
};

class Factory {
public:
    static Product* createProduct(char type) {
        if (type == 'A') {
            return new ProductA();
        } else if (type == 'B') {
            return new ProductB();
        } else {
            return nullptr;
        }
    }
};

int main() {
    Product* product = Factory::createProduct('A');
    product->useProduct();  // Outputs "Using Product A."
    delete product;

    product = Factory::createProduct('B');
    product->useProduct();  // Outputs "Using Product B."
    delete product;

    return 0;
}