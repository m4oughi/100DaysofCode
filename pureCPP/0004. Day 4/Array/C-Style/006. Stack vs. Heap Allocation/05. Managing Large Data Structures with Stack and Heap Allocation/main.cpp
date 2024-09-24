const int rows = 1000;
const int cols = 1000;

void stackMatrix() {
    // Large matrix on the stack (may cause stack overflow if too large)
    int stackMatrix[rows][cols];  // Stack allocation
    stackMatrix[0][0] = 1;  // Example operation
}

void heapMatrix() {
    // Large matrix on the heap
    int** heapMatrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        heapMatrix[i] = new int[cols];
    }

    heapMatrix[0][0] = 1;  // Example operation

    // Clean up heap allocation
    for (int i = 0; i < rows; ++i) {
        delete[] heapMatrix[i];
    }
    delete[] heapMatrix;
}

int main() {
    stackMatrix();  // May cause stack overflow for very large matrices
    heapMatrix();   // Safer for large matrices, but requires manual cleanup
    return 0;
}
