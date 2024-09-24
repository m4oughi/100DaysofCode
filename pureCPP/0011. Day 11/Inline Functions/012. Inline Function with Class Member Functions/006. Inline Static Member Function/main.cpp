#include <iostream>

class Counter {
private:
    static int count;
public:
    // Inline static member function to access static data
    static inline int getCount() {
        return count;
    }
    
    static void increment() {
        ++count;
    }
};

int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::increment();
    std::cout << "Count: " << Counter::getCount() << std::endl; // Output: Count: 2
    return 0;
}
