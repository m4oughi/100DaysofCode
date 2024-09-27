#include <stdio.h>
#define SUCCESS 0
#define FAILURE 1

int main() {
    if (someFunction() == SUCCESS) {
        printf("Operation was successful\n");
    } else {
        printf("Operation failed\n");
    }
    return 0;
}
