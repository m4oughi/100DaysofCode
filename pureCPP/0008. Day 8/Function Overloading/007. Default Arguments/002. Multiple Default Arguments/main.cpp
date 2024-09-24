#include <iostream>
using namespace std;

void displayInfo(string name, int age = 18, string city = "Unknown") {
    cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
}

int main() {
    displayInfo("John");                      // Uses default age and city
    displayInfo("Doe", 25);                   // Uses default city
    displayInfo("Jane", 30, "New York");      // Overrides both defaults
    return 0;
}
