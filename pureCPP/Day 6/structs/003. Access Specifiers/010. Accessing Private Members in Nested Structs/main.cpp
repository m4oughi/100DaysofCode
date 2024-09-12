#include <iostream>

struct Outer {
private:
    int secret;

public:
    Outer(int s) : secret(s) {}

    struct Inner {
        void revealSecret(const Outer& outer) {
            std::cout << "Secret: " << outer.secret << std::endl; // Accessing Outer’s private member
        }
    };
};
