#include <iostream>

struct Box {
private:
    int length;
    
    friend int getLength(const Box& b);  // Declare friend with const reference
    
public:
    Box(int l) : length(l) {}
};

int getLength(const Box& b) {
    return b.length;
}

int main() {
    const Box box(10);  // Constant object
    std::cout << "Length: " << getLength(box) << std::endl;
    return 0;
}
