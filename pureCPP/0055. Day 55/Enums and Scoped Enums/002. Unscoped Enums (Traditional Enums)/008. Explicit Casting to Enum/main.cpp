#include <iostream>

enum Response { Yes = 1, No = 2, Maybe = 3 };

int main() {
    int input = 2;
    Response reply = static_cast<Response>(input);

    std::cout << "User replied: " << reply << std::endl;
}
