#include <iostream>

constexpr int add(int x) {
    static int count = 0;  // ✅ Allowed in `constexpr` (but not a true constexpr function)
    count += x;
    return count;
}

// consteval int addConsteval(int x) { 
//     static int count = 0; ❌ ERROR: `static` variable not allowed in `consteval`
//     count += x;
//     return count;
// }

int main() {
    int runtimeVal = add(10); // ✅ Runtime evaluation allowed
}
