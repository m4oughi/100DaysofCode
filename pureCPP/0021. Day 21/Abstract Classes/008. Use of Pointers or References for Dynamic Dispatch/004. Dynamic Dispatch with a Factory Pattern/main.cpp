#include <iostream>
using namespace std;

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
    if (product) {
        product->use();  // Outputs "Using Product A"
        delete product;
    }

    product = Factory::createProduct('B');
    if (product) {
        product->use();  // Outputs "Using Product B"
        delete product;
    }

    return 0;
}
