#include <iostream>

class AbstractTemplate {
public:
    void templateMethod() {
        step1();
        step2();
        step3();
    }

    virtual ~AbstractTemplate() = default;

protected:
    virtual void step1() const = 0;
    virtual void step2() const = 0;
    virtual void step3() const = 0;
};

class ConcreteClass : public AbstractTemplate {
protected:
    void step1() const override {
        std::cout << "ConcreteClass step1." << std::endl;
    }

    void step2() const override {
        std::cout << "ConcreteClass step2." << std::endl;
    }

    void step3() const override {
        std::cout << "ConcreteClass step3." << std::endl;
    }
};

int main() {
    ConcreteClass obj;
    obj.templateMethod();  // Executes the template method

    return 0;
}
