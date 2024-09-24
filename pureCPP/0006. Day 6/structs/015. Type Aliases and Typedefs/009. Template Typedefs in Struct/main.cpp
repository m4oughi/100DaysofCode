#include <iostream>

template <typename T>
struct TemplateTypedef {
    typedef T ValueType;  // Typedef for a template parameter
    
    ValueType data;
    
    void print() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    TemplateTypedef<int> obj;
    obj.data = 10;
    obj.print();
    
    TemplateTypedef<double> obj2;
    obj2.data = 5.5;
    obj2.print();
}
