#include <iostream>

class SimpleClass {
public:
    SimpleClass(const std::string& name) : name(name) { std::cout << "Object " << name << " created" << std::endl; }
    ~SimpleClass() { std::cout << "Object " << name << " destroyed (unwinding)" << std::endl; }
private:
    std::string name;
};

int main() {
    try {
        SimpleClass obj1("A");
        SimpleClass obj2("B");
        SimpleClass obj3("C");
        throw std::runtime_error("Exception thrown");
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
