#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

    class Engine { // Nested Class
    public:
        void start() {
            cout << "Engine started!" << endl;
        }
    };

public:
    Car(string m, int y) : model(m), year(y) { }

    void displayDetails() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }

    void startEngine() {
        Engine engine;
        engine.start();
    }
};

int main() {
    Car myCar("Jaguar", 2027);
    myCar.displayDetails();
    myCar.startEngine();
    return 0;
}
