#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int nilai){
        data = nilai;
        left = NULL;
        right = NULL;
    }
};

class BST{
private:
    Node* root;

public:
    BST(){
        root = NULL;
    }

    void insert(int nilai){
        if(root == NULL){
            root = new Node(nilai);
        }
    }
};

int main(){
    BST tree;

    tree.insert(20);
}
