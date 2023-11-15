#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        cout << "i am inside the default constructor" << endl;
        this->next = NULL;
    }
    Node(int data)
    {
        // cout << "i am inside the parametrised constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};
// print the LINKEDLIST

void PrintLL(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// print the length of linked list
int CountLenLL(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, int data) // mistake happen so use [&]call by refrence
{
    //---->CORNER---CASE-->mtlb koi node hai hi nahi
    if (head == NULL)
    {
        // create a node
        Node *NullNode = new Node(data);
        // head points to null
        head = NullNode;
    }
    else
    {
        // non empty wala case
        //  create a node
        Node *newNode = new Node(data);
        // linking into node
        newNode->next = head;
        // head change of a node
        head = newNode;
    }
}

//--------->insert a tails
void insertAtTails(Node *&head, Node *&tail, int data)
{
    if (tail == NULL && head == NULL)
    {
        Node *nullNode = new Node(data);
        // point to null
        tail = nullNode;
    }
    else
    {
        // non empty wala case
        //  1. create a node
        Node *newNode = new Node(data);
        // 2.adding at tail
        tail->next = newNode;
        // 3.final
        newNode->next = NULL;
    }
}

// 3.->insert at any position
void insertAtAnyPosition(Node *&head, Node *&tail, int data, int position)
{
    int length = CountLenLL(head);

    if (position < 1)
    {
        cout << "you can't insert at any node." << endl;
    }
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    else if (position > length)
    {
        insertAtTails(head, tail, data);
    }
    else
    {
        // at in between of linked list.

        // new node creation for addition
        Node *newNode = new Node(data);

        // curr and privious
        Node *prev = NULL;
        Node *curr = head;

        while (position != 1)
        {
            // ab hum curr and prev ko apne sahi position pe
            //  leke ja rahe hain
            prev = curr;
            curr = curr->next;
            position--;
        }
        // step 3
        prev->next = newNode;
        newNode->next = curr;
    }
}
int main()
{
    // Node a; // we create a object of class node(STATIC ALLOCATION)
    // Node *head = new Node(); // dayanmic memory allocation

    // parameterized constructor(creation of nodes of linked list)
    Node *first = new Node(10);
    Node *second = new Node(10);
    Node *third = new Node(10);
    Node *fourth = new Node(10);

    // to make a links to form a linked list
    first->next = second;
    second->next = third;
    third->next = fourth;

    // creation of head node and passed in function
    Node *head = first;
    cout << "Printing the enitre linked list:" << endl;
    // PrintLL(head);

    // find length
    int LengthOfLL = CountLenLL(head);
    cout << LengthOfLL << endl;

    // insert at head
    insertAtHead(head, 15);
    // PrintLL(head);

    // insert a tail
    Node *tail = fourth;
    insertAtTails(head, tail, 50);
    // PrintLL(head);

    // insert at any position
    insertAtAnyPosition(head, tail, 6, 4);
    PrintLL(head);
    return 0;
}