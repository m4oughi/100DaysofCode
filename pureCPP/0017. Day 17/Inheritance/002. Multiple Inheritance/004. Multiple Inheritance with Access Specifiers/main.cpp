#include <iostream>
using namespace std;

class Animal {
protected:
    void animalSound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Vehicle {
private:
    void privateMove() {
        cout << "Vehicle's private move." << endl;
    }
public:
    void publicMove() {
        cout << "Vehicle moves." << endl;
    }
};

class DogCar : public Animal, public Vehicle {
public:
    void performActions() {
        animalSound(); // Accessible: protected in Animal
        publicMove();  // Accessible: public in Vehicle
        // privateMove(); // Error: Not accessible due to private in Vehicle
    }
};

int main() {
    DogCar myDogCar;
    myDogCar.performActions();
    myDogCar.publicMove(); // Directly accessible due to public access specifier
    return 0;
}
