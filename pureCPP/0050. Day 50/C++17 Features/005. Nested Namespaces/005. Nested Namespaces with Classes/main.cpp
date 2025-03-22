#include <iostream>

namespace Data::Models {
    class User {
    public:
        void info() {
            std::cout << "User Model in Data::Models namespace\n";
        }
    };
}

int main() {
    Data::Models::User user;
    user.info();
    return 0;
}
