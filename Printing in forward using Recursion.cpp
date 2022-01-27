#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* Insert(Node* head, int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        Node* temp1 = head;
        while ((temp1->next) != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    return head;
}

void Print(Node* p)
{
    if(p == NULL)
    return;

    cout<<(p->data)<<" ";
    Print(p->next);
}

int main()
{
    Node* head = NULL;

    cout<<"Enter the number of elements of LL: ";
    int n, i, x;

    cin>>n;

    cout<<"\nEnter elements of LL one by one\n";

    for(i=0; i<n; i++)
    {
        cin>>x;
        head = Insert(head,x);
    }

    cout<<"\nEnter of LL are: ";
    Print(head);

    return 0;
}