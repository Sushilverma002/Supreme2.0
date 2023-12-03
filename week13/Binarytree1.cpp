#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *createTree()
{
    cout << "enter the value" << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    // STEPS:create nodes
    Node *root = new Node(data);
    // step2== left node subtree
    root->left = createTree();
    // step3create right node
    root->right = createTree();
    return root;
}
int main()
{
    return 0;
}