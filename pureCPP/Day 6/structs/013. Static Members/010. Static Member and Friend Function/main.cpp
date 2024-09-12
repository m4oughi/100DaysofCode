#include <iostream>

struct WithFriend {
    static int secret;

    friend void revealSecret(const WithFriend&);
};

int WithFriend::secret = 42;

void revealSecret(const WithFriend&) {
    std::cout << "Secret is: " << WithFriend::secret << std::endl;
}

int main() {
    WithFriend obj;
    revealSecret(obj);
}
