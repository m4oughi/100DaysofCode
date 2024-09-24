#include <iostream>

template <typename T, typename U = T>
struct RecursiveTemplate {
    T first;
    U second;
    
    void display() const {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    }
};

int main() {
    RecursiveTemplate<int> obj1;  //
