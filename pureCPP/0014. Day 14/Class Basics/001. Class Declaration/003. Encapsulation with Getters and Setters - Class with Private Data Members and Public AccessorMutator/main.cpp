#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car myCar;
    myCar.setModel("Ford");
    myCar.setYear(2021);

    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Year: " << myCar.getYear() << endl;
    return 0;
}
