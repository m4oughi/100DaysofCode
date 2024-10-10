#include <iostream>
using namespace std;

class Counter {
private:
    static int privateCount;

protected:
    static int protectedCount;

public:
    Counter() {
        privateCount++;
        protectedCount++;
    }

    // Declare a friend class
    friend class CounterOperations;
};

int Counter::privateCount = 0;
int Counter::protectedCount = 0;

class CounterOperations {
public:
    void showCounts() {
        cout << "Private Count: " << Counter::privateCount << endl;  // Accessing static private member
        cout << "Protected Count: " << Counter::protectedCount << endl;  // Accessing static protected member
    }
};

int main() {
    Counter c1, c2, c3;
    CounterOperations ops;
    ops.showCounts();  // Friend class accessing private and protected static members
    return 0;
}
