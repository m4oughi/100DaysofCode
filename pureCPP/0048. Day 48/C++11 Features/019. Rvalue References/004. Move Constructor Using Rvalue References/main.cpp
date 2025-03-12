#include <iostream>
#include <string>

class MyString {
private:
    std::string data;
public:
    MyString(std::string str) : data(std::move(str)) {} // Move constructor

    void print() { std::cout << "Data: " << data << std::endl; }
};

int main() {
    MyString s1("Hello");
    s1.print();

    return 0;
}
