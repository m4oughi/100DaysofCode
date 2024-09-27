#include <stdio.h>

#define MESSAGE "Hello, World!"

int main() {
    printf("%s\n", MESSAGE);
    
    #undef MESSAGE
    
    // printf("%s\n", MESSAGE);  // This would cause an error as MESSAGE is undefined
    return 0;
}
