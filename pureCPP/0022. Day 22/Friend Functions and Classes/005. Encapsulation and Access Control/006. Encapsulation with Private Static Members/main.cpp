#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Encapsulated private static member

public:
    Counter() {
        count++;
    }

    // Friend function declaration
    friend void displayCount();
};

// Initialize static member
int Counter::count = 0;

// Friend function accessing private static member
void displayCount() {
    cout << "Count: " << Counter::count << endl;
}

int main() {
    Counter c1, c2, c3;
    displayCount();  // Controlled access to encapsulated static member
    return 0;
}
