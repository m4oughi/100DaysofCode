#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) {
    return a + b;
}

string add(string a, string b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add(10, 20) << endl;
    cout << "Concatenation of strings: " << add("Hello", " World") << endl;
    return 0;
}
