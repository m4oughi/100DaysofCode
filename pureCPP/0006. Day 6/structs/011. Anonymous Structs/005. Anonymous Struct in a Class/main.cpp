#include <iostream>

class MyClass {
public:
    struct {
        int id;
        std::string name;
    };

    void print() const {
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.id = 123;
    obj.name = "Anonymous Struct";
    
    obj.print();
}
