#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // its not the first node
    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void createBST(Node *&root)
{
    cout << "Enter data:" << endl;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cout << "Enter data:" << endl;
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

/*traversals*/
// Pre-NLR
void preOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
// IN-LNR
void inOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
// POST-LRN
void postOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Minimum value in the tree
Node *minValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        cout << "no vaule in the tree.";
        return NULL;
    }
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

// maximum values
Node *maxvalues(Node *root)
{
    if (root == NULL)
    {
        cout << "no values in the tree";
        return NULL;
    }
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

//binary search in tree
bool searchInBST(Node*root, int target){
    //base case
    if(root==NULL){
        return false;
    }

    //1 case mein sambhal lunga baki recursion dekh lega
    if(root->data==target){
        return true;
    } 

    //baaki reucrsion sambhal lenga
    //left and right mein
    bool leftAns=false;
    bool rightAns=false;
    if(target>root->data){
        rightAns=searchInBST(root->right,target);
    }else{
        leftAns=searchInBST(root->left,target);
    }
    return leftAns||rightAns;
}
int main()
{
    Node *root = NULL;
    createBST(root);
    levelOrderTraversal(root);

    cout << endl
         << "printing preorder traversal:";
    preOrder(root);

    cout << endl
         << "printing inorder traversal:";
    inOrder(root);

    cout << endl
         << "printing postOrder traversal:";
    postOrder(root);

    cout << endl;
    // Node *minNode = minValue(root);

    // if (minNode == NULL)
    // {
    //     cout << "if there is no node in tree that means no min value exist.";
    // }
    // else
    // {
    //     cout << "Minimum values is" << minNode->data << endl;
    // }

    // maximum values
    // cout << endl;
    // Node *maxi = maxvalues(root);

    // if (maxi == NULL)
    // {
    //     cout << "there is no maximum node in tree.";
    // }
    // else
    // {
    //     cout << "maximun values " << maxi->data << endl;
    // }
    int T;
    cout<<"enter the target value"<<endl;
    cin>>T;

    while(T!=-1){
        bool ans=searchInBST(root,T);
        if(ans==true){
            cout<<"Found"<<endl;
        }else{
            cout<<"Not Found"<<endl;
        }
        cout<<"enter the target"<<endl;
        cin>>T;
    }
    return 0;
}