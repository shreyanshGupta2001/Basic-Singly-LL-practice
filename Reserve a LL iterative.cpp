#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head;
void insert(int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if(head==NULL)
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
    
}

void reverse()
{
    Node *current, *prev, *Next;
    current = head;
    prev = NULL;

    while(current != NULL)
    {
        Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
    } 

    head = prev;

}

void print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<(temp->data)<<" ";
        temp = temp->next;
    }
}

int main()
{
    head == NULL;
    insert(2);
    insert(10);
    insert(5);
    insert(8);

    print();

    cout<<"\n";

    reverse();

    print();

    return 0;
}