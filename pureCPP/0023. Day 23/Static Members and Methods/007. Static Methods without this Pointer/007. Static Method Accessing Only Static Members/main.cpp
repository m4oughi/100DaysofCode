#include <iostream>
using namespace std;

class Classroom {
public:
    static int totalChairs;  // Static data member
    int roomNumber;  // Non-static data member

    static void updateChairs(int newChairs) {  // Static method
        totalChairs = newChairs;  // Can access static member
    }

    // static void updateRoom(int room) {  // ERROR: Cannot access non-static member
    //     roomNumber = room;
    // }
};

// Initialize static data member
int Classroom::totalChairs = 0;

int main() {
    // Access static method via class name
    Classroom::updateChairs(50);
    cout << "Total chairs: " << Classroom::totalChairs << endl;  // Output: 50

    return 0;
}
