#include <iostream>

class MyClass {
public:
    MyClass(int value) : value(value) {}
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};

int main() {
    MyClass* objArray[3];

    // Create objects dynamically and assign to the array of pointers
    for (int i = 0; i < 3; ++i) {
        objArray[i] = new MyClass(i * 10);
    }

    // Call member function for each object using the array of pointers
    for (int i = 0; i < 3; ++i) {
        objArray[i]->display();  // Outputs: Value: 0, Value: 10, Value: 20
    }

    // Free the allocated memory
    for (int i = 0; i < 3; ++i) {
        delete objArray[i];
    }
}
