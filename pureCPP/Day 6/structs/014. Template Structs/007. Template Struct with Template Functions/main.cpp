#include <iostream>

template <typename T>
struct TemplateWithFunction {
    T value;
    
    template <typename U>
    void print(U additional) const {
        std::cout << "Value: " << value << ", Additional: " << additional << std::endl;
    }
};

int main() {
    TemplateWithFunction<int> obj;
    obj.value = 10;
    obj.print(5.5);  // U is double
    
    TemplateWithFunction<double> obj2;
    obj2.value = 7.8;
    obj2.print(100);  // U is int
}
