#include <iostream>
using namespace std;

class SecureData {
private:
    static int accessLevel;  // Private static member

public:
    static void grantAccess(int level) {
        if (level > 0 && level <= 10) {  // Validate access level
            accessLevel = level;
        } else {
            cout << "Invalid access level!" << endl;
        }
    }

    static int getAccessLevel() {
        return accessLevel;
    }

private:
    static void elevateAccess() {
        if (accessLevel < 10) {
            accessLevel++;
        }
    }

public:
    static void upgradeAccess() {
        elevateAccess();  // Control access to private method
    }
};

// Initialize static member
int SecureData::accessLevel = 1;

int main() {
    SecureData::grantAccess(5);  // Valid access
    cout << "Access Level: " << SecureData::getAccessLevel() << endl;  // Output: 5

    SecureData::upgradeAccess();
    cout << "Upgraded Access Level: " << SecureData::getAccessLevel() << endl;  // Output: 6

    return 0;
}
