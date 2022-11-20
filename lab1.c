#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} * head;

void createNode(int n)
{
    struct Node *current, *newNode;
    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Input your data for Node1: ");
    scanf("%d", &head->data);
    current = head;
    for (int i = 2; i <= n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter value for %d Node: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }
}
void insertAnyPos(int n)
{
    struct Node *current,*newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter Data: ");
    scanf("%d",&newnode->data);

     current = head; 
     for(int i=1;i<n-1;i++)
     {
        current = current->next;
     }
     newnode->next = current->next;
     current->next = newnode;

}
void count()
{
    struct Node *current;
    current = head;
    int count = 0;

    while (current != NULL)
    {
        count++;

        current = current->next;
    }
    printf("%d", count);
}
void display()
{
    struct Node *current;
    current = head;
    printf("\nHere is your Linked List: \n");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;

    }
}
int main()
{
    int amount, s;
    printf("How many nodes u want to create : \n");
    scanf("%d", &amount);
    createNode(amount);
    display();
    printf("Enter where you want to insert: ");
    scanf("%d",&s);
    insertAnyPos(s);
    display();
    count();


return 0;
}
 