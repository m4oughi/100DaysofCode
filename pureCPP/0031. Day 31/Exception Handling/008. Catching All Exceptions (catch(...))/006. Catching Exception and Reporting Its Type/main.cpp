#include <iostream>
#include <typeinfo>

void someFunction() {
    throw 3.14;  // Throwing a double
}

int main() {
    try {
        someFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught a standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception of type: " << typeid(std::current_exception()).name() << std::endl;
    }
    return 0;
}
