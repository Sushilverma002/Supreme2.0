#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// it return the created root node of created tree
Node *createTree()
{
    cout << "enter the value  for Node" << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    // STEPS:create nodes
    Node *root = new Node(data);
    // step2: left node subtree
    // cout << "left of Node:" << root->data << endl;
    root->left = createTree();

    // step3create right node
    // cout << "right of Node:" << root->data << endl;

    root->right = createTree();

    return root;
}
// we have 4 types of traversal in tree
/*
    1. preorder traversal
    2. inorderd traversal
    3. postorderd traversal
    4. level ordered traversal*/
void PreOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // N(current) L(left) R(right)

    // N
    cout << root->data << " ";
    // L
    PreOrderTraversal(root->left);
    // R
    PreOrderTraversal(root->right);
}
void inorderedTravesal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // LNR

    // L
    inorderedTravesal(root->left);
    // N
    cout << root->data << " ";
    // R
    inorderedTravesal(root->right);
}

void postOrderedTravesal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // LRN

    // L
    postOrderedTravesal(root->left);
    // R
    postOrderedTravesal(root->right);
    // N
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // intials
    q.push(root);
    q.push(NULL); // null ->mtlb hai marker

    // asli traversal
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            // cout<<endl;->to get to next
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // vaild node wala case -> while level order traversing
            // we move from left->right
            cout << front->data << " ";

            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{
    Node *root = createTree();
    // cout << root->data << endl;
    cout << "Printing Preorder Traversal of a tree:";
    PreOrderTraversal(root);
    cout << endl;

    cout << "Printing Preorder Traversal of a tree:";
    inorderedTravesal(root);
    cout << endl;

    cout << "Printing Preorder Traversal of a tree:";
    postOrderedTravesal(root);
    cout << endl;

    cout << "Printing level orderd Traversal of a tree:";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}