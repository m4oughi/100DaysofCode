#include <iostream>

namespace Utilities {
    void printMessage() {
        std::cout << "Utility function called!" << std::endl;
    }
}

// Creating a namespace alias
namespace U = Utilities;

class User {
public:
    void useUtility() {
        U::printMessage(); // Accessing the utility function using the alias
    }
};

int main() {
    User user;
    user.useUtility(); // Calling the User method
    return 0;
}
