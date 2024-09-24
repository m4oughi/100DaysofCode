#include <iostream>

class Counter {
private:
    int count;

public:
    Counter(int initial) : count(initial) {}

    // Increment and return by value
    Counter increment() const {
        return Counter(count + 1);
    }

    void display() const {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c(5);
    Counter newCounter = c.increment();  // Calls increment(), which returns by value
    newCounter.display();  // Output: Count: 6
    return 0;
}
