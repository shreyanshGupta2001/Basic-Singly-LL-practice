#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = new Node();

void Insert(int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }

    else
    {
        Node* temp1 = head;
        while((temp1->next) != NULL)
        {
            temp1 = temp1->next;
        }

        temp1->next = temp;
    }
}

void Print()
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<(temp->data)<<" ";
        temp = temp->next;
    }
}

void Reverse(struct Node* p)
{
    if((p->next) == NULL)
    {
        head = p;
        return;
    }

    Reverse(p->next);

    struct Node *q = p->next;
    q->next = p;
    p->next = NULL;
}
int main()
{
    head = NULL;
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    cout<<"Elements of LL: ";
    Print();
    Reverse(head);
    cout<<"\nReversed LL by Recusion: ";
    Print();
}