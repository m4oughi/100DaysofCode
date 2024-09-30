#include <iostream>
using namespace std;

class Garage {
public:
    int* carYears;
    int size;

    Garage(int s) : size(s) {
        // Dynamically allocate an array of car years
        carYears = new int[size];
    }

    ~Garage() {
        delete[] carYears;  // Deallocate the dynamic array
    }

    void setYear(int index, int year) {
        if (index >= 0 && index < size) {
            carYears[index] = year;
        }
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << "Car " << i + 1 << " Year: " << carYears[i] << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of cars in the garage: ";
    cin >> n;

    // Dynamically allocate a Garage object
    Garage* garagePtr = new Garage(n);

    // Input car years
    for (int i = 0; i < n; ++i) {
        int year;
        cout << "Enter year for car " << i + 1 << ": ";
        cin >> year;
        garagePtr->setYear(i, year);
    }

    garagePtr->display();

    delete garagePtr;  // Deallocate memory

    return 0;
}
