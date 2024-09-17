#include <iostream>

class MyClass {
private:
    int id;

public:
    MyClass(int i) : id(i) {}

    // Static function that takes an object as a parameter
    static void printID(const MyClass& obj) {
        std::cout << "Object ID: " << obj.id << std::endl;
    }
};

int main() {
    MyClass obj1(101);
    MyClass obj2(202);

    MyClass::printID(obj1);  // Calls static function with object parameter
    MyClass::printID(obj2);

    return 0;
}
