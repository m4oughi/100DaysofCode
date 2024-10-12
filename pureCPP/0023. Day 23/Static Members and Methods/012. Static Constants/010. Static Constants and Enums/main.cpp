#include <iostream>
using namespace std;

class StatusCodes {
public:
    static const int OK = 200;
    static const int NotFound = 404;
    static const int InternalError = 500;
};

int main() {
    // Accessing static constants for status codes
    cout << "OK: " << StatusCodes::OK << endl;            // Output: 200
    cout << "Not Found: " << StatusCodes::NotFound << endl;  // Output: 404
    cout << "Internal Error: " << StatusCodes::InternalError << endl;  // Output: 500
    return 0;
}
