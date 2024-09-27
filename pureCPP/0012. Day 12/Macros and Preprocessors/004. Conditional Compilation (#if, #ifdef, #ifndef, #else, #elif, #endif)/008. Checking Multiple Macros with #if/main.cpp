#define FEATURE_A 1
#define FEATURE_B 0

#if FEATURE_A && FEATURE_B
void combinedFeature() {
    printf("Feature A and B are enabled.\n");
}
#else
void combinedFeature() {
    printf("Either Feature A or B is disabled.\n");
}
#endif

int main() {
    combinedFeature();
    return 0;
}
