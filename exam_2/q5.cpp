// Reverse a Linked List
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist
{
public:
    Node *head;

    Linkedlist()
    {
        this->head = NULL;
    }

    void insertAtTail(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void printList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void reverseList()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;
        while (current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};

int main()
{
    Linkedlist *list = new Linkedlist();

    list->insertAtTail(1);
    list->insertAtTail(2);
    list->insertAtTail(3);
    list->insertAtTail(4);
    list->insertAtTail(5);
    list->printList();
    list->reverseList();
    list->printList();
    return 0;
}
