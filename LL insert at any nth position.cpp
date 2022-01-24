#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x, int n)
{
    Node* temp1 = new Node();
    temp1->data = x;
    temp1->next = NULL;
    
    if(n==1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    
    Node* temp2 = head;
    for(int i=0; i<n-2; i++)
    {
        temp2 = temp2->next;
    }
    
    temp1->next = temp2->next;
    temp2->next = temp1;
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
    head = NULL;
    
    insert(2,1);
    insert(3,2);
    insert(3,3);
    insert(4,2);
    insert(5,1);
    insert(10,3);
    print();

    return 0;
}