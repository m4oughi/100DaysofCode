#include <iostream>
using namespace std;

int generateID() {
    return 1001;  // Function that generates a unique ID
}

class Student {
public:
    static int studentID;  // Static member to hold student ID
};

// Initialize static member with a function call
int Student::studentID = generateID();

int main() {
    // Access static member via class name
    cout << "Initial student ID: " << Student::studentID << endl;  // Output: 1001
    return 0;
}
