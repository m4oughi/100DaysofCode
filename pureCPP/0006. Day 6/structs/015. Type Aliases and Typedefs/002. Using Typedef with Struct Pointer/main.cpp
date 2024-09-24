#include <iostream>

struct TypedefPointer {
    typedef TypedefPointer* Ptr;  // Typedef for a pointer to this struct
    int value;
};

int main() {
    TypedefPointer obj;
    obj.value = 100;

    TypedefPointer::Ptr ptr = &obj;
    std::cout << "Pointer value: " << ptr->value << std::endl;
}
