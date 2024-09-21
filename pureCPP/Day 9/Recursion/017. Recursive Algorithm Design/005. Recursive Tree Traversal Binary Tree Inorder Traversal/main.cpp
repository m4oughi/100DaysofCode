#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void inorder(Node* root) {
    if (root == nullptr)
        return;  // Base case
    inorder(root->left);  // Recurse on left subtree
    cout << root->data << " ";  // Visit node
    inorder(root->right);  // Recurse on right subtree
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    inorder(root);  // Output: 4 2 5 1 3
    return 0;
}
