#include <stdio.h>
#define FEATURE_FLAG 0

#if FEATURE_FLAG
void newFeature() {
    printf("New Feature is enabled.\n");
}
#else
void newFeature() {
    printf("New Feature is disabled.\n");
}
#endif

int main() {
    newFeature();
    return 0;
}
