#include <iostream>

class Counter {
public:
    inline static int increment() {
        static int count = 0; // `static` variable retains its value across all instances
        return ++count;
    }
};

int main() {
    std::cout << "Counter::increment(): " << Counter::increment() << std::endl; // Output: 1
    std::cout << "Counter::increment(): " << Counter::increment() << std::endl; // Output: 2
    std::cout << "Counter::increment(): " << Counter::increment() << std::endl; // Output: 3
    return 0;
}
