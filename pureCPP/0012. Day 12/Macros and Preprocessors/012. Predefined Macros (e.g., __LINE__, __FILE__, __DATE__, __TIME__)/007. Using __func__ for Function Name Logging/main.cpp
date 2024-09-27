#include <stdio.h>

void log_function_name() {
    printf("This function is: %s\n", __func__);
}

int main() {
    log_function_name();
    return 0;
}
