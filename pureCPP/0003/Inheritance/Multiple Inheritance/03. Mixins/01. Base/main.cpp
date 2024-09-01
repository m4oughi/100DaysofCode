#include <iostream>

// Mixin 1
class Printable {
public:
    void print() const {
        std::cout << "Printable content." << std::endl;
    }
};

// Mixin 2
class Scannable {
public:
    void scan() const {
        std::cout << "Scannable document." << std::endl;
    }
};

// Derived class using mixins
class Document : public Printable, public Scannable {
public:
    // Inherits functionalities from Printable and Scannable
};

int main() {
    Document doc;
    doc.print();  // Output: Printable content.
    doc.scan();   // Output: Scannable document.
    return 0;
}
