/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    Node* temp = new Node;
    
    temp->data = x;
    temp->next = head;
    
    head = temp;
}

void print()
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    cout<<"Enter n: ";
    int n, i, x;
    cin>>n;
    
    cout<<"\nEnter elements of LL: ";
    
    for(i=0; i<n; i++)
    {
        cin>>x;
        insert(x);
    }
    
    cout<<"\nThe elements of LL:\n";
    print();
    return 0;
}
