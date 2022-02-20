// Program to find middle of linked list .

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node*next;
};
struct node*head = NULL;

void Printmiddle(struct node*head)
{
    struct node*slow_ptr = head;
    struct node*fast_ptr = head;
    if(head != NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is[%d]\n\n",slow_ptr->data);
    }
}
void push(struct node**head_ref,int new_data)
{
    struct node*new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next =(*head_ref);
    (*head_ref) = new_node;
}
void printList(struct node*ptr)
{
    while(ptr != NULL)
    {
        printf("%d->",ptr->data);
        ptr->next->next;
    }
    printf("null \n");
}

int main(){
    struct node*head = NULL;
    int i;
    for(i=5;i>0;i--)
    {
        push(&head,i);
        printList(head);
        Printmiddle(head);
    }
    return 0 ;
}
