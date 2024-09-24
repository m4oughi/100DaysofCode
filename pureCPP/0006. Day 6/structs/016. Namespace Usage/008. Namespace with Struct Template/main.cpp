#include <iostream>

namespace TemplateNamespace {
    template <typename T>
    struct TemplateStruct {
        T data;
        void display() const {
            std::cout << "Data: " << data << std::endl;
        }
    };
}

int main() {
    TemplateNamespace::TemplateStruct<int> intObj;
    intObj.data = 100;
    intObj.display();
    
    TemplateNamespace::TemplateStruct<double> doubleObj;
    doubleObj.data = 55.5;
    doubleObj.display();
}
