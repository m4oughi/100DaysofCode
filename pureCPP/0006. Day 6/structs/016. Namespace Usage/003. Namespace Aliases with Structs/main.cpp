#include <iostream>

namespace FirstNamespace {
    struct Data {
        int value;
        
        void show() const {
            std::cout << "FirstNamespace Value: " << value << std::endl;
        }
    };
}

namespace SecondNamespace {
    struct Data {
        int value;
        
        void show() const {
            std::cout << "SecondNamespace Value: " << value << std::endl;
        }
    };
}

int main() {
    namespace FN = FirstNamespace;  // Alias for FirstNamespace
    FN::Data obj1;
    obj1.value = 100;
    obj1.show();
    
    SecondNamespace::Data obj2;
    obj2.value = 200;
    obj2.show();
}
