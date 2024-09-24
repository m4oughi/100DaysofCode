#include <iostream>

template <typename T>
struct BaseTemplate {
    T baseValue;
    
    void showBase() const {
        std::cout << "Base Value: " << baseValue << std::endl;
    }
};

template <typename T>
struct DerivedTemplate : public BaseTemplate<T> {
    T derivedValue;
    
    void showDerived() const {
        std::cout << "Derived Value: " << derivedValue << std::endl;
    }
};

int main() {
    DerivedTemplate<int> obj;
    obj.baseValue = 100;
    obj.derivedValue = 200;
    
    obj.showBase();
    obj.showDerived();
}
