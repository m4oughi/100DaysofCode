#include <iostream>
using namespace std;

class UserPermissions {
private:
    static string adminPassword;  // Private static member only for admin access
    static int userCount;

public:
    static void setUserCount(int count, const string& password) {
        if (password == adminPassword) {  // Only admin can modify user count
            userCount = count;
        } else {
            cout << "Access denied: Incorrect password!" << endl;
        }
    }

    static int getUserCount() {
        return userCount;
    }
};

// Initialize private static members
string UserPermissions::adminPassword = "admin123";
int UserPermissions::userCount = 0;

int main() {
    UserPermissions::setUserCount(50, "admin123");  // Valid admin access
    cout << "User count: " << UserPermissions::getUserCount() << endl;  // Output: 50

    UserPermissions::setUserCount(100, "wrongPassword");  // Invalid access attempt
    cout << "User count: " << UserPermissions::getUserCount() << endl;  // Output: 50

    return 0;
}
