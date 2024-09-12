#include <iostream>

struct PrivateStatic {
private:
    static int secretValue;

public:
    static void revealSecret() {
        std::cout << "Secret Value: " << secretValue << std::endl;
    }
};

int PrivateStatic::secretValue = 999;

int main() {
    PrivateStatic::revealSecret();
}
