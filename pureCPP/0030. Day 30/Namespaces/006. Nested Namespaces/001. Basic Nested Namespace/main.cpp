#include <iostream>

namespace Outer {
    namespace Inner {
        void greet() {
            std::cout << "Hello from the nested namespace!" << std::endl;
        }
    }
}

int main() {
    Outer::Inner::greet();  // Accessing the function from the nested namespace
    return 0;
}
