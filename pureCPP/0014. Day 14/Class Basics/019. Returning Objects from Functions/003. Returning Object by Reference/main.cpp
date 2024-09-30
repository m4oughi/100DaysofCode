#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    Counter& increment() {
        count++;
        return *this;  // Returning the object by reference
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;
    c.increment().increment();  // Chaining the calls
    c.display();

    return 0;
}
