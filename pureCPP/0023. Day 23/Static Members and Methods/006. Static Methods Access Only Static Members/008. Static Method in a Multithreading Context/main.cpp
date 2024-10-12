#include <iostream>
#include <thread>
using namespace std;

class SharedCounter {
private:
    static int counter;  // Static member shared across threads

public:
    static void increment() {
        counter++;  // Static method modifying static member
    }

    static int getCounter() {
        return counter;  // Static method returning static member
    }
};

// Initialize static member outside the class
int SharedCounter::counter = 0;

void incrementCounter() {
    for (int i = 0; i < 1000; i++) {
        SharedCounter::increment();
    }
}

int main() {
    thread t1(incrementCounter);
    thread t2(incrementCounter);

    t1.join();
    t2.join();

    cout << "Final counter value: " << SharedCounter::getCounter() << endl;  // Output: 2000 (if thread-safe)
    
    return 0;
}
