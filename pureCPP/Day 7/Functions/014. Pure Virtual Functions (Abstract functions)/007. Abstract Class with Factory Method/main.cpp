#include <iostream>

class AbstractProduct {
public:
    virtual void use() const = 0;  // Pure virtual function
};

class ConcreteProductA : public AbstractProduct {
public:
    void use() const override {
        std::cout << "Using ConcreteProductA." << std::endl;
    }
};

class ConcreteProductB : public AbstractProduct {
public:
    void use() const override {
        std::cout << "Using ConcreteProductB." << std::endl;
    }
};

class ProductFactory {
public:
    enum ProductType { A, B };

    static AbstractProduct* createProduct(ProductType type) {
        if (type == A) return new ConcreteProductA();
        else if (type == B) return new ConcreteProductB();
        else return nullptr;
    }
};

int main() {
    AbstractProduct* product = ProductFactory::createProduct(ProductFactory::A);
    if (product) {
        product->use();
        delete product;
    }

    return 0;
}
