#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>

using namespace std;

// exemple Tree
class Node{
    public:
        Node(int data) : data(data){};
        Node* left = nullptr;
        Node* right = nullptr;
        int data = 0;

    
};

Node* createNode(int data){
    Node* newnode = new Node(data);
    newnode->right = newnode->left = nullptr;
    return newnode;
}

void printTreePreOrder(Node* node)
{
    if (node == nullptr) return;

    cout << node->data << endl;
    printTreePreOrder(node->left);
    printTreePreOrder(node->right);
}

void printTreeInOrder(Node* node)
{
    if (node == nullptr) return;

    printTreeInOrder(node->left);
    cout << node->data << endl;
    printTreeInOrder(node->right);
}

void printTreePostOrder(Node* node)
{
    if (node == nullptr) return;

    printTreePostOrder(node->left);
    printTreePostOrder(node->right);
    cout << node->data << endl;
}

class Solution
{
    public:
        void process(Node* node, vector<int> & output)
        {
            if (node == nullptr) return;

            process(node->left, output);
            output.push_back(node->data);
            process(node->right, output);
        }

};



int main()
{
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->left->left->left = createNode(6);
    root->right->left = createNode(7);
    root->right->right = createNode(8);

    cout << "Preoder" << endl;
    printTreePreOrder(root);
    cout << "Inoder" << endl;
    printTreeInOrder(root);
    cout << "Postoder" << endl;
    printTreePostOrder(root);
    
    
    Node* tree_test = createNode(1);
    tree_test->right = createNode(2);
    tree_test->right->left = createNode(3);
    
    cout << "Test inorder traversal" << endl;
    printTreeInOrder(tree_test);

    vector<int> result;
    Solution s;
    s.process(tree_test, result);
    
    cout << "Test solution" << endl;
    
    for (auto id : result)
        cout << id << " ";
    cout << endl;
    


    return 0;
}