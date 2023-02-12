#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data ;
    struct Node *next;
}; 

void movetoFront(struct Node **head_ref)
{
    if(*head_ref == NULL||(*head_ref)->next == NULL)
    return;
    struct Node *secLast = NULL;
    struct Node *Last = *head_ref;
    while(Last->next != NULL)
    {
        secLast = Last;
        Last = Last->next;
    }


secLast->next = NULL;
Last->next = *head_ref;
*head_ref = Last;
}

void push(struct Node** head_ref,int new_data)
{
    struct Node* new_node= malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node*node)
{
    while(node != NULL)
    {
        printf("%d \n",node->data);
        node = node->next;
    }
}

int main()
{
    struct Node *head = NULL;
    push(&head ,5);
    push(&head ,4);
    push(&head ,3);
    push(&head ,2);
    push(&head ,1);
    printf("\n Linked List before moving Last to front  \n");
    printList(head );
    movetoFront(&head );
    printf("\n Linked List after removing last to front \n");
    printList(head );
    return 0;
}
