#include <iostream>
using namespace std;

// Abstract Base Class with Virtual Destructor
class Product {
public:
    virtual void use() = 0;  // Pure virtual function
    virtual ~Product() {  // Virtual destructor
        cout << "Product Destructor" << endl;
    }
};

class ProductA : public Product {
public:
    void use() override {
        cout << "Using Product A" << endl;
    }
    ~ProductA() override {
        cout << "ProductA Destructor" << endl;
    }
};

class ProductB : public Product {
public:
    void use() override {
        cout << "Using Product B" << endl;
    }
    ~ProductB() override {
        cout << "ProductB Destructor" << endl;
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
    product->use();

    delete product;  // Properly calls ProductA and Product destructors

    return 0;
}
