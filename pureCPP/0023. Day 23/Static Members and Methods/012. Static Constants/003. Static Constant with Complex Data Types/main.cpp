#include <iostream>
using namespace std;

class AppSettings {
public:
    static const string appName;  // Declaration of static constant of type string
};

// Definition of static constant outside the class
const string AppSettings::appName = "MyApp";

int main() {
    // Accessing static constant of string type
    cout << "Application Name: " << AppSettings::appName << endl;  // Output: MyApp
    return 0;
}
