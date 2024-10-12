#include <iostream>
using namespace std;

class AppConfig {
public:
    static string appName;  // Static member for configuration

    static void setAppName(const string& name) {
        appName = name;
    }
};

// Initialize static member
string AppConfig::appName = "DefaultApp";

int main() {
    // Accessing static member without any global variable
    cout << "Initial App Name: " << AppConfig::appName << endl;  // Output: DefaultApp

    AppConfig::setAppName("SuperApp");
    cout << "Updated App Name: " << AppConfig::appName << endl;  // Output: SuperApp

    return 0;
}
