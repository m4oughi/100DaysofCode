#include <iostream>
using namespace std;

class Car {
private:
    string brand;
protected:
    int speed;

public:
    Car(string b, int s) : brand(b), speed(s) {}

    // Friend function declaration
    friend void showDetails(Car);
};

// Friend function definition
void showDetails(Car c) {
    cout << "Brand: " << c.brand << ", Speed: " << c.speed << " km/h" << endl;
}

int main() {
    Car car("Toyota", 150);
    showDetails(car);
    return 0;
}
