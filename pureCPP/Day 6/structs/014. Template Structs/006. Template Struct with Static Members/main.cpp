#include <iostream>

template <typename T>
struct StaticTemplate {
    static int counter;
    
    StaticTemplate() {
        ++counter;
    }
};

template <typename T>
int StaticTemplate<T>::counter = 0;

int main() {
    StaticTemplate<int> obj1, obj2;
    StaticTemplate<double> obj3;
    
    std::cout << "Counter for int: " << StaticTemplate<int>::counter << std::endl;
    std::cout << "Counter for double: " << StaticTemplate<double>::counter << std::endl;
}
