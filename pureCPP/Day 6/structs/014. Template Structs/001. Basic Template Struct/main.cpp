#include <iostream>

template <typename T>
struct BasicTemplate {
    T value;
    
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    BasicTemplate<int> intStruct;
    intStruct.value = 10;
    intStruct.display();
    
    BasicTemplate<double> doubleStruct;
    doubleStruct.value = 5.5;
    doubleStruct.display();
}
