#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m = 0) : meters(m) {}

    // Friend function for overloading + with mixed types (int + Distance)
    friend Distance operator+(int value, const Distance& d);

    void display() const {
        cout << meters << " meters" << endl;
    }
};

// Overloading + for int + Distance using a friend function
Distance operator+(int value, const Distance& d) {
    return Distance(value + d.meters);
}

int main() {
    Distance d1(100);
    Distance d2 = 50 + d1;  // Using overloaded + with mixed types
    d2.display();  // Output: 150 meters
    return 0;
}
