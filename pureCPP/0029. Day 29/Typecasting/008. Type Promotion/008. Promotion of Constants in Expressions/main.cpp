#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    int radius = 5;

    double area = pi * radius * radius;  // int is promoted to double

    cout << "Area of circle: " << area << endl;  // 78.5398
    return 0;
}
