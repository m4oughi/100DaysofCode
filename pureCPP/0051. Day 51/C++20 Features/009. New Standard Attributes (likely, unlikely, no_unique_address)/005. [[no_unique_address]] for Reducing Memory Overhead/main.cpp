#include <iostream>

struct Logger {
    void log(const std::string& msg) { std::cout << msg << "\n"; }
};

struct Data {
    int value;
    [[no_unique_address]] Logger logger; // No extra space
};

int main() {
    std::cout << "Size of Data struct: " << sizeof(Data) << "\n";
}
