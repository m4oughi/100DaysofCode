#include <iostream>

struct Box {
private:
    static int count;
    
    friend int getCount();
    
public:
    Box() {
        ++count;
    }
    
    static void resetCount() {
        count = 0;
    }
};

int Box::count = 0;

int getCount() {
    return Box::count;
}

int main() {
    Box b1, b2;
    std::cout << "Count: " << getCount() << std::endl;
    
    Box::resetCount();
    std::cout << "Count after reset: " << getCount() << std::endl;
    return 0;
}
