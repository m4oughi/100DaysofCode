#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    // Friend function for pre-increment
    friend Counter& operator++(Counter& c);

    // Friend function for post-increment (dummy int differentiates post from pre)
    friend Counter operator++(Counter& c, int);

    void display() const {
        cout << "Counter: " << value << endl;
    }
};

// Overloading pre-increment using a friend function
Counter& operator++(Counter& c) {
    ++c.value;
    return c;
}

// Overloading post-increment using a friend function
Counter operator++(Counter& c, int) {
    Counter temp = c;
    c.value++;
    return temp;
}

int main() {
    Counter c(10);

    ++c;  // Pre-increment
    c.display();  // Output: Counter: 11

    c++;  // Post-increment
    c.display();  // Output: Counter: 12

    return 0;
}
