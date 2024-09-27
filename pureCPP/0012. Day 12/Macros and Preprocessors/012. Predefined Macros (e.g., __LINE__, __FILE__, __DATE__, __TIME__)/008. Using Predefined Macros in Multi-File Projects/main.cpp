#include <stdio.h>
extern void module1_function();
extern void module2_function();

int main() {
    module1_function();
    module2_function();
    return 0;
}
