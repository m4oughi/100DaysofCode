#include <iostream>

struct MultipleInstances {
    static int shared;
    int instanceValue;

    MultipleInstances(int val) : instanceValue(val) {
        ++shared;
    }
};

int MultipleInstances::shared = 0;

int main() {
    MultipleInstances obj1(10);
    MultipleInstances obj2(20);
    
    std::cout << "Shared: " << MultipleInstances::shared << std::endl;
    std::cout << "Obj1 Value: " << obj1.instanceValue << std::endl;
    std::cout << "Obj2 Value: " << obj2.instanceValue << std::endl;
}
