#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = static_cast<float>(a);  // Static cast from int to float
    cout << "Float value: " << b << endl;
    return 0;
}
