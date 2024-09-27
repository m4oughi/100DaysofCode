#include <stdio.h>
#define MIN_VERSION 10
#define CURRENT_VERSION 12

#if CURRENT_VERSION >= MIN_VERSION
void newFeature() {
    printf("New Feature is available.\n");
}
#else
void newFeature() {
    printf("New Feature is not available.\n");
}
#endif

int main() {
    newFeature();
    return 0;
}
