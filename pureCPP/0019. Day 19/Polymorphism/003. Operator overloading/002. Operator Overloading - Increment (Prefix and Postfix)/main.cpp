#include <iostream>
using namespace std;

class Counter {
public:
    int value;

    Counter(int v = 0) : value(v) {}

    // Prefix increment
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() const {
        cout << "Counter: " << value << endl;
    }
};

int main() {
    Counter c(5);

    ++c;  // Calls prefix increment
    c.display();

    c++;  // Calls postfix increment
    c.display();

    return 0;
}
