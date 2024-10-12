#include <iostream>
using namespace std;

class EncryptionKeyManager {
private:
    static string encryptionKey;  // Sensitive static member

public:
    static void setEncryptionKey(const string& key) {
        if (key.length() == 16) {  // Only accept valid keys (16 characters long)
            encryptionKey = key;
        } else {
            cout << "Invalid encryption key!" << endl;
        }
    }

    static string getEncryptionKey() {
        return "Access denied: Cannot retrieve the encryption key!";
    }

    static void displayKeyStatus() {
        cout << "Encryption key is set." << endl;
    }
};

// Initialize sensitive static member
string EncryptionKeyManager::encryptionKey = "";

int main() {
    EncryptionKeyManager::setEncryptionKey("1234567890abcdef");  // Valid key
    EncryptionKeyManager::displayKeyStatus();

    // Attempt to retrieve the key (no direct access)
    cout << EncryptionKeyManager::getEncryptionKey() << endl;  // Output: Access denied

    return 0;
}
