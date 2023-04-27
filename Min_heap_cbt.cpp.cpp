#include <iostream>
#include <cmath>
using namespace std;

struct node {
    int info;
    node *left, *right;
    int check;
};

class CBT {
    private:
        int h, count;
    public:
        int flg;
        node *root;
        void Insert(node *temp, int key, int lh);
        void Inorder(node *temp);
        void Min_Heapify(node *temp, node *check_node);
        void Tree_Height(node *temp, int h);
        void printCurrentLevel(node *temp, int level);
        void printLevelOrder(node *temp);
        CBT() {
            root = NULL;
            h = 0;
            flg = 0;
            count = 0;
        }
};
// Insertion IN CBT
void CBT::Insert(node *temp, int key, int lh) {
    // Empty Tree
    if (root == NULL) {
        root = new node;
        root->info = key;
        root->left = root->right = NULL;
        count += 1;
        root->check = 0;
        cout << "Node Added At Root" << endl;
        return;
    }
    if (temp->left != NULL)
        Insert(temp->left, key, lh + 1);
    if (count == pow(2, h + 1) - 1) {
        temp->left = new node;
        temp->left->info = key;
        temp->left->left = temp->left->right = NULL;
        temp->check = 0;
        h += 1;
        count += 1;
        flg = 1;
        cout << "Node Added At Left" << endl;
        return;
    }
    if (temp->left != NULL && temp->right == NULL && flg == 0) {
        temp->right = new node;
        temp->right->info = key;
        temp->right->right = temp->right->left = NULL;
        flg = 1;
        count += 1;
        temp->check = 0;
        cout << "Node Added At Right" << endl;
        return;
    }   
    if (temp->left == NULL && temp->right == NULL && lh == h - 1 && flg == 0) {
        temp->left = new node;
        temp->left->info = key;
        temp->left->left = temp->left->right = NULL;
        flg = 1;
        count += 1;
        temp->check = 0;
        cout << "Node Added at Left" << endl;
        return;
    }
    if (temp->right != NULL && flg == 0) {
        Insert(temp->right, key, lh + 1);
    }
}
// InOrder traversal
void CBT::Inorder(node *temp) {
    if (temp->left != NULL)
        Inorder(temp->left);
    cout << temp->info << " ";
    if (temp->right != NULL)
        Inorder(temp->right);
}
// Min_Heapify
void CBT::Min_Heapify(node *temp, node *swap_node) {
    if (temp->left != NULL)
        Min_Heapify(temp->left, swap_node);
    // Converting to Max Heap
    if (temp->check != 1 && swap_node->info > temp->info) {
        int s = swap_node->info;
        swap_node->info = temp->info;
        temp->info = s;
    }
    if (temp->right != NULL) {
        Min_Heapify(temp->right, swap_node);
    }
}
void CBT::printLevelOrder(node *temp) {
    for (int i = 1; i <= h; i++) {
        printCurrentLevel(root, i);
    }
}
void CBT::printCurrentLevel(node *temp, int level) {
    if (temp == NULL)
        return;
    if (level == 1) {
        temp->check = 1;
        Min_Heapify(root, temp);
    }
    else if (level > 1) {
        printCurrentLevel(temp->left, level - 1);
        printCurrentLevel(temp->right, level - 1);
    }
}
int main() {
    CBT obj;
    obj.Insert(obj.root, 60, 0);
    obj.Insert(obj.root, 40, 0);
    obj.flg = 0;
    obj.Insert(obj.root, 30, 0);
    obj.flg = 0;
    obj.Insert(obj.root, 2, 0);
    obj.flg = 0;
    obj.Insert(obj.root, 1000, 0);

    obj.printLevelOrder(obj.root);
    obj.Inorder(obj.root);
    return 0;
}
