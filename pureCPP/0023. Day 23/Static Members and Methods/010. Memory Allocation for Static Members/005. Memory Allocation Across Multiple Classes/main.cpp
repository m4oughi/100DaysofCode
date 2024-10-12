#include <iostream>
using namespace std;

class Car {
public:
    static int totalCars;

    Car() {
        totalCars++;
    }
};

class Bike {
public:
    static int totalBikes;

    Bike() {
        totalBikes++;
    }
};

// Memory allocation for static members
int Car::totalCars = 0;
int Bike::totalBikes = 0;

int main() {
    Car car1, car2;
    Bike bike1;

    cout << "Total cars: " << Car::totalCars << endl;  // Output: 2
    cout << "Total bikes: " << Bike::totalBikes << endl;  // Output: 1

    return 0;
}
