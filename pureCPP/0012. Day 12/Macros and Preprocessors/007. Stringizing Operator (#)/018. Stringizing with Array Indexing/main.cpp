#define INDEX_STRING(arr, index) #arr "[" #index "]"

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    printf("Accessing: %s\n", INDEX_STRING(array, 3)); // Output: "Accessing: array[3]"
    return 0;
}
