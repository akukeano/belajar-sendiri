#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int nilai) {
        data = nilai;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node *root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {

    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);

    root->left->right->right->left = new Node(8);

    root->right->right = new Node(9);

    cout << "Preorder  : ";
    preorder(root);

    cout << "\nInorder   : ";
    inorder(root);

    cout << "\nPostorder : ";
    postorder(root);

    return 0;
}
