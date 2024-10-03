#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter() : count(0) {}

    Counter& operator++() { // Pre-increment
        ++count;
        return *this;
    }

    void display() const {
        cout << count << endl;
    }
};

int main() {
    Counter c1;
    ++c1;
    c1.display();  // Output: 1
    return 0;
}
