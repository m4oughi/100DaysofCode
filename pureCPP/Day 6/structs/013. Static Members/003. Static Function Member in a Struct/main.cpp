#include <iostream>

struct StaticFunction {
    static int count;

    static void increment() {
        ++count;
    }
};

int StaticFunction::count = 0;

int main() {
    StaticFunction::increment();
    StaticFunction::increment();
    
    std::cout << "Count: " << StaticFunction::count << std::endl;
}
