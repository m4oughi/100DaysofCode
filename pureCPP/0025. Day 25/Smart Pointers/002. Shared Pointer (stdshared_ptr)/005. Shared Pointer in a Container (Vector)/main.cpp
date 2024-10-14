#include <iostream>
#include <memory>
#include <vector>

class MyClass {
public:
    MyClass(int val) : value(val) {
        std::cout << "MyClass Constructor: " << value << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass Destructor: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    std::vector<std::shared_ptr<MyClass>> vec;

    vec.push_back(std::make_shared<MyClass>(100));  // Adding shared_ptr to vector
    vec.push_back(std::make_shared<MyClass>(200));

    std::cout << "Vector size: " << vec.size() << std::endl;
    return 0;
}
