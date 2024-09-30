#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;
};

int main() {
    Car myCar;
    myCar.model = "Toyota";
    myCar.year = 2020;

    cout << "Car Model: " << myCar.model << endl;
    cout << "Car Year: " << myCar.year << endl;
    return 0;
}
