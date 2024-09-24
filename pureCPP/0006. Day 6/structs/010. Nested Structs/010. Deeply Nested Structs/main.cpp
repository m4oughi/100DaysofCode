#include <iostream>

struct Level1 {
    int a;
    
    Level1(int x) : a(x) {}
    
    void print() const {
        std::cout << "Level1: " << a << std::endl;
    }
};

struct Level2 {
    Level1 l1;
    
    Level2(int x) : l1(x) {}
    
    void print() const {
        l1.print();
        std::cout << "Level2: " << l1.a * 2 << std::endl;
    }
};

struct Level3 {
    Level2 l2;
    
    Level3(int x) : l2(x) {}
    
    void print() const {
        l2.print();
        std::cout << "Level3: " << l2.l1.a * 3 << std::endl;
    }
};

int main() {
    Level3 l3(10);
    l3.print();
}
