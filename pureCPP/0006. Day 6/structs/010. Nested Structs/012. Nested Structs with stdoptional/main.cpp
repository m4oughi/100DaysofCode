#include <iostream>
#include <optional>

struct Inner {
    int x;
    
    Inner(int a) : x(a) {}
    
    void print() const {
        std::cout << "Inner: " << x << std::endl;
   
