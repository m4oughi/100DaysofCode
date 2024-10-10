#include <iostream>
using namespace std;

class IProduct {
public:
    virtual void useProduct() = 0;
};

class ProductA : public IProduct {
public:
    void useProduct() override {
        cout << "Using Product A" << endl;
    }
};

class ProductB : public IProduct {
public:
    void useProduct() override {
        cout << "Using Product B" << endl;
    }
};

class ProductFactory {
public:
    static IProduct* createProduct(char type) {
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
    IProduct* productA = ProductFactory::createProduct('A');
    IProduct* productB = ProductFactory::createProduct('B');

    productA->useProduct();  // Outputs "Using Product A"
    productB->useProduct();  // Outputs "Using Product B"

    delete productA;
    delete productB;

    return 0;
}
