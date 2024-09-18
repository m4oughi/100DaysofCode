#include <iostream>
using namespace std;

void printData(string name, int age = 18, char gender = 'M') {
    cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
}

int main() {
    printData("John");              // Uses default age and gender
    printData("Doe", 25);           // Uses default gender
    printData("Jane", 30, 'F');     // Overrides both default arguments
    return 0;
}
