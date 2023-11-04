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
        cout << "i am inside the parametrised constructor" << endl;
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
    PrintLL(head);
    int LengthOfLL = CountLenLL(head);
    cout << LengthOfLL << endl;
    return 0;
}