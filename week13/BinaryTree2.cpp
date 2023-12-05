#include <iostream>
#include <queue>
#include <map>

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
// left of the treee
void PrintLeftOfTree(Node *root, int level, vector<int> &leftview)
{
    if (root == NULL)
    {
        return;
    }
    if (level == leftview.size())
    {
        leftview.push_back(root->data);
    }
    PrintLeftOfTree(root->left, level + 1, leftview);
    PrintLeftOfTree(root->right, level + 1, leftview);
}
// right of the treee
void PrintRightOfTree(Node *root, int level, vector<int> &rightview)
{
    if (root == NULL)
    {
        return;
    }
    if (level == rightview.size())
    {
        rightview.push_back(root->data);
    }
    PrintRightOfTree(root->right, level + 1, rightview);
    PrintRightOfTree(root->left, level + 1, rightview);
}

/* top view of the tree*/
// we have to make custom levels for priting the elements
void printTopView(Node *root)
{
    map<int, int> hdtoNodemap;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second;

        // if there  is no enrty for hd in map, then create a new entry
        if (hdtoNodemap.find(hd) == hdtoNodemap.end())
        {
            hdtoNodemap[hd] = frontNode->data;
        }

        // child ko dekhna hai
        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }
    cout << "printing top view:" << endl;
    for (auto i : hdtoNodemap)
    {
        cout << i.second << " ";
    }
}
// bottom view answer
void printBottomView(Node *root)
{
    map<int, int> hdtoNodemap;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second;

        // In each case update the value of Node

        hdtoNodemap[hd] = frontNode->data;

        // child ko dekhna hai
        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }
    cout << "printing bottom view:" << endl;
    for (auto i : hdtoNodemap)
    {
        cout << i.second << " ";
    }
}

/*Bounary Traversal*/
void LeftBoundaryTraversal(Node *root)
{

    // part A
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    cout << root->data << " ";
    if (root->left != NULL)
    {
        LeftBoundaryTraversal(root->left);
    }
    else
    {
        LeftBoundaryTraversal(root->right);
    }
}
void printLeafBoundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // agar dono null hai toh iska mtlb ye hai ki
    // ab leaf par hi ho or vahi print kara do
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    // recursion for left and right
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}
// part c->right boundary print
void printRightBoundary(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    if (root->right != NULL)
    {
        printRightBoundary(root->right);
    }
    else
    {
        printRightBoundary(root->left);
    }
    cout << root->data << " ";
}
void PrintEntierBoundaryOfaTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    LeftBoundaryTraversal(root);
    printLeafBoundary(root);
    if (root->right != NULL)
    {
        printRightBoundary(root->right);
    }
    else
    {
        printRightBoundary(root->left);
    }
}
int main()
{
    Node *root = createTree();
    // cout << root->data << endl;
    cout << "Printing level orderd Traversal of a tree:";
    levelOrderTraversal(root);
    // cout << endl;
    /*
    vector<int> leftview;
    PrintLeftOfTree(root, 0, leftview);

    // priting the array
    for (int i = 0; i < leftview.size(); i++)
    {
        cout << leftview[i] << " ";
    }
    cout << endl;
    vector<int> rightView;
    PrintRightOfTree(root, 0, rightView);

    // priting the array
    for (int i = 0; i < rightView.size(); i++)
    {
        cout << rightView[i] << " ";
    }
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
    */

    // printTopView(root);
    // printBottomView(root);
    PrintEntierBoundaryOfaTree(root);
    return 0;
}