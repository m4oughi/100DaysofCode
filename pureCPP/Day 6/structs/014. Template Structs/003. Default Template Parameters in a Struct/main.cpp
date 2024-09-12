#include <iostream>

template <typename T = int>
struct DefaultTemplate {
    T value;
    
    void print() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    DefaultTemplate<> defaultStruct; // T is int by default
    defaultStruct.value = 100;
    defaultStruct.print();
    
    DefaultTemplate<double> customStruct;
    customStruct.value = 7.8;
    customStruct.print();
}
