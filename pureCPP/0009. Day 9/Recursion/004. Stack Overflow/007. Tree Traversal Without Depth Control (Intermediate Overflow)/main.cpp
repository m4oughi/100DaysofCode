#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void inorderTraversal(Node* node) {
    if (node == nullptr) // Base Case
        return;
    inorderTraversal(node->left);  // Recursive Case: traverse left subtree
    cout << node->data << " ";
    inorderTraversal(node->right); // Recursive Case: traverse right subtree
}
