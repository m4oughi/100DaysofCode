#include <iostream>
#include <thread>

class Counter {
public:
    void increment() {
        ++count;
    }
    void printCount() const {
        std::cout << "Count: " << count << std::endl;
    }
private:
    int count = 0;
};

void updateCounter(Counter& c) {
    c.increment();
}

int main() {
    Counter counter;
    std::thread t(updateCounter, std::ref(counter)); // Object passed by reference
    t.join();
    
    counter.printCount();
    return 0;
}
