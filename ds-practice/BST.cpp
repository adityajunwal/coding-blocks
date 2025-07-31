#include <iostream>
#include <queue>
using namespace std;

class BSTNode{
public:
    int data;
    BSTNode* left;
    BSTNode* right;

    BSTNode(int val): data(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree{
private:
    BSTNode* insertNode(int val, BSTNode* node){
        if (!node){
            node = new BSTNode(val);
            return node;
        } 
        if (val < node->data){
            node->left = insertNode(val, node->left);
            return node;
        } else {
            node->right = insertNode(val, node->right);
            return node;
        }
    }

    void leftorder(BSTNode* node){
        if (!node) {
            return;
        }
        cout << node->data << " ";
        leftorder(node->left);
        leftorder(node->right);
    }

    void inorder(BSTNode* node){
        if (!node) {
            return;
        }
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void rightorder(BSTNode* node){
        if (!node) {
            return;
        }
        rightorder(node->left);
        rightorder(node->right);
        cout << node->data << " ";
    }

    void levelorder(BSTNode* node){
        if (!node){
            return;
        }
        queue<BSTNode*> q;
        q.push(node);
        while (!q.empty()){
            BSTNode* temp = q.front();
            cout << temp->data << " ";
            q.pop();
            if (temp->left){
                q.push(temp->left);
            } 
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
public:
    BSTNode* root;
    BinarySearchTree(): root(nullptr) {}
    BinarySearchTree(int val): root(new BSTNode(val)) {}
    
    void deleteNode(int val){
        if (!root) return;
        if (root->data == val){
            BSTNode* leftNode = root->left;
        }
    }

    void insert(int val){
        if (!root){
            root = new BSTNode(val);
            return;
        }
        root = insertNode(val, root);
    }

    void printTree(){
        cout << "IN ORDER: "; inorder(root); cout << endl;
        cout << "LEFT ORDER: "; leftorder(root); cout << endl;
        cout << "RIGHT ORDER: "; rightorder(root); cout << endl;
        cout << "LEVEL ORDER: "; levelorder(root); cout << endl;
    }
};


int main(){
    BinarySearchTree tree;
    tree.insert(10);
    tree.insert(5);
    tree.insert(12);
    tree.insert(4);
    tree.insert(8);
    tree.insert(20);

    tree.printTree();
    return 0;
}