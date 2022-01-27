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

void Delete(int n)
{
    Node* temp1 = head;
    int i;
    
    if(n==1) // case if 1st node is to be deleted
    {
        head = temp1->next; // head now has 2nd node in it
        delete temp1;
        return;
    }
    for(i=0; i<n-2; i++)
    {
        temp1 = temp1->next;
    }//temp 1 points to (n-1)th node

    Node* temp2 = temp1->next; //assigns temp2 the nth node, hence now temp2 is now the node to be deleted

    temp1->next = temp2->next; //assigns (n+1)th node addess to temp1 next

    delete temp2;
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
    insert(9);
    insert(20);
    print();

    cout<<"\nEnter Node to be deleted: ";
    int n;
    cin>>n;

    Delete(n);
    print();

    return 0;
}