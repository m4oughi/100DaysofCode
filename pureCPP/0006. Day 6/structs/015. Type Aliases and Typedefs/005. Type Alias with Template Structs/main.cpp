#include <iostream>

template <typename T>
struct TemplateAlias {
    using Pointer = T*;  // Type alias for a pointer to the template type
    Pointer value;
    
    void display() const {
        std::cout << "Pointer value: " << *value << std::endl;
    }
};

int main() {
    int x = 50;
    TemplateAlias<int> obj;
    obj.value = &x;
    obj.display();
}
