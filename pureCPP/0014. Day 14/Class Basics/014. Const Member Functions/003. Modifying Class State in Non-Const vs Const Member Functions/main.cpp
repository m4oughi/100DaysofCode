#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) : count(c) {}

    void increment() {  // Non-const function can modify state
        count++;
    }

    int getCount() const {  // Const function cannot modify state
        return count;
    }
};

int main() {
    Counter c(10);
    c.increment();  // Allowed
    cout << "Count: " << c.getCount() << endl;  // Using const function
    return 0;
}
