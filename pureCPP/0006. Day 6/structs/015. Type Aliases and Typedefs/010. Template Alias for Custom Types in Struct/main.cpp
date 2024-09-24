#include <iostream>

template <typename T>
struct CustomAlias {
    using PairType = std::pair<T, T>;  // Alias for a custom type using template
    
    PairType data;
    
    void display() const {
        std::cout << "First: " << data.first << ", Second: " << data.second << std::endl;
    }
};

int main() {
    CustomAlias<int> obj;
    obj.data = std::make_pair(10, 20);
    obj.display();
    
    CustomAlias<double> obj2;
    obj2.data = std::make_pair(2.5, 5.5);
    obj2.display();
}
