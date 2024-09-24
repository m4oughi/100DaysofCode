#include <iostream>

class Counter {
private:
    static int count;  // Static variable to track count

public:
    static void increment() {
        count++;  // Accessing static variable inside static function
    }

    static void displayCount() {
        std::cout << "Count: " << count << std::endl;
    }
};

// Initialize the static variable
int Counter::count = 0;

int main() {
    Counter::increment();  // Call static function without object
    Counter::increment();
    Counter::displayCount();  // Output: Count: 2

    return 0;
}
