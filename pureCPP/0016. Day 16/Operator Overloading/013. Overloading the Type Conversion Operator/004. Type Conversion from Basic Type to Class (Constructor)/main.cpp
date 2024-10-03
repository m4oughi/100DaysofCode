#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    // Constructor allows implicit conversion from int to Distance
    Distance(int m) : meters(m) {}

    void display() const {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    Distance d = 500;  // Implicit conversion from int to Distance
    d.display();  // Output: Distance: 500 meters
    return 0;
}
