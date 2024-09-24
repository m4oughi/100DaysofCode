#include <iostream>
#include <vector>

template <typename T>
struct DependentAlias {
    using Container = typename std::vector<T>;  // Alias for a dependent type
    
    Container elements;
    
    void addElement(T element) {
        elements.push_back(element);
    }
    
    void display() const {
        for (const auto& elem : elements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    DependentAlias<int> obj;
    obj.addElement(10);
    obj.addElement(20);
    obj.display();
    
    DependentAlias<double> obj2;
    obj2.addElement(2.5);
    obj2.addElement(5.5);
    obj2.display();
}
