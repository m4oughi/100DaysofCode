#include <iostream>

template <typename T>
struct StaticTemplate {
    static T value;
};

template <typename T>
T StaticTemplate<T>::value = T();

int main() {
    StaticTemplate<int>::value = 100;
    StaticTemplate<double>::value = 3.14;
    
    std::cout << "Int Value: " << StaticTemplate<int>::value << std::endl;
    std::cout << "Double Value: " << StaticTemplate<double>::value << std::endl;
}
