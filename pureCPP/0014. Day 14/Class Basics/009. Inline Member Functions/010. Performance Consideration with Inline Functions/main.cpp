#include <iostream>
using namespace std;

class LargeCalculation {
private:
    int num;

public:
    LargeCalculation(int n) : num(n) {}

    // Inline member function that might not be inlined due to its size
    inline int complexCalculation() {
        int result = 0;
        for (int i = 1; i <= num; ++i) {
            result += i * i;
        }
        return result;
    }
};

int main() {
    LargeCalculation calc(10000);
    cout << "Complex Calculation Result: " << calc.complexCalculation() << endl;
    return 0;
}
