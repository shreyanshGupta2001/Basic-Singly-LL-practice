/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp->data = x;
    
    temp->next = head;
    
    head = temp;
}

void print()
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp = head;
    
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    printf("Enter the n: ");
    int n, i, x;
    
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter elements of LL: ");
        scanf("%d", &x);
        insert(x);
    }
    
    printf("\n The LL is:\n");
    print();

    return 0;
}
