#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    static int count;  // Static data member

public:
    Circle(double r) : radius(r) {
        count++;
    }

    static int getCount() {  // Static member function
        return count;
    }
};

// Initialize static data member
int Circle::count = 0;

int main() {
    Circle c1(3.5), c2(4.5);

    cout << "Total Circles created: " << Circle::getCount() << endl;
    return 0;
}
