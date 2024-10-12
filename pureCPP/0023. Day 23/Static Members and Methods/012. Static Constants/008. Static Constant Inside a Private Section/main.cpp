#include <iostream>
using namespace std;

class SecureData {
private:
    static const int encryptionKey;  // Private static constant

public:
    static int getEncryptionKey() {
        return encryptionKey;  // Static method to access the constant
    }
};

// Definition of private static constant
const int SecureData::encryptionKey = 12345;

int main() {
    // Accessing private static constant through a public method
    cout << "Encryption Key: " << SecureData::getEncryptionKey() << endl;  // Output: 12345
    return 0;
}
