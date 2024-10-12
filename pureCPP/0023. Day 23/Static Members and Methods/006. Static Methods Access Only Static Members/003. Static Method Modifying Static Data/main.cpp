#include <iostream>
using namespace std;

class Config {
private:
    static int maxUsers;  // Static member variable

public:
    static void setMaxUsers(int users) {
        maxUsers = users;  // Modifying static member in static method
    }

    static int getMaxUsers() {
        return maxUsers;  // Returning static member in static method
    }
};

// Initialize the static variable outside the class
int Config::maxUsers = 100;

int main() {
    cout << "Initial Max Users: " << Config::getMaxUsers() << endl;  // Output: 100

    Config::setMaxUsers(200);  // Modifying static variable via static method
    cout << "Updated Max Users: " << Config::getMaxUsers() << endl;  // Output: 200

    return 0;
}
