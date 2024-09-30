#include <iostream>
using namespace std;

class MathHelper {
public:
    static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    int a = 56, b = 98;
    cout << "GCD of " << a << " and " << b << " is " << MathHelper::gcd(a, b) << endl;
    return 0;
}
