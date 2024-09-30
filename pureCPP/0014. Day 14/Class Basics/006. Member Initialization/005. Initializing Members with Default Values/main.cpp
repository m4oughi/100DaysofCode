#include <iostream>
using namespace std;

class Triangle {
private:
    int base;
    int height;

public:
    // Constructor with default values
    Triangle(int b = 5, int h = 10) : base(b), height(h) {}

    int calculateArea() {
        return (base * height) / 2;
    }
};

int main() {
    Triangle t1;  // Object with default values
    Triangle t2(6, 12);  // Object with user-defined values

    cout << "Area (default): " << t1.calculateArea() << endl;
    cout << "Area (custom): " << t2.calculateArea() << endl;
    return 0;
}
