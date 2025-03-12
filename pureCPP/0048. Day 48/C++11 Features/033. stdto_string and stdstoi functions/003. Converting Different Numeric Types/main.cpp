#include <iostream>
#include <string>

int main() {
    float f = 5.75f;
    long long ll = 9876543210LL;

    std::string str_f = std::to_string(f);
    std::string str_ll = std::to_string(ll);

    std::cout << "Float to string: " << str_f << "\n";
    std::cout << "Long long to string: " << str_ll << "\n";

    return 0;
}
