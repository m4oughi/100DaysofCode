#include <iostream>
using namespace std;

class SettingsManager {
private:
    static int brightness;  // Global brightness setting

public:
    static void setBrightness(int level) {
        brightness = level;
    }

    static int getBrightness() {
        return brightness;
    }
};

// Initialize static member
int SettingsManager::brightness = 50;

int main() {
    // Access global settings manager without a global variable
    cout << "Initial brightness: " << SettingsManager::getBrightness() << endl;  // Output: 50

    SettingsManager::setBrightness(80);
    cout << "Updated brightness: " << SettingsManager::getBrightness() << endl;  // Output: 80

    return 0;
}
