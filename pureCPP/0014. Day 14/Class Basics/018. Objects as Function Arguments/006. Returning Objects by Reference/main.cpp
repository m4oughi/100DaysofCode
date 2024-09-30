#include <iostream>
using namespace std;

class Counter {
public:
    int count;

    Counter() : count(0) {}

    Counter& increment() {  // Returning object by reference
        count++;
        return *this;
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;
    c.increment().increment().increment();  // Chaining function calls
    c.display();

    return 0;
}
