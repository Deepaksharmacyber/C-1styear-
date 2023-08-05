// creation and traversal of doubly linked list 

#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data ;
    Node* next;
    Node* prev;
};

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    
    if((*head_ref)!=NULL)
        (*head_ref)->prev = new_node;
    
    (*head_ref)= new_node;
}

void printList(Node* node)
{
    Node* last;
    cout<<"\n traversal in forward "<<"direction \n";
    while(node!=NULL){
        cout<<" "<<node->data<<" ";
        last = node;
        node = node->next;
    }
    cout<<"\n traversal in reverse" <<"direction \n";
    while(last!=NULL){
        
        cout<<" "<<last->data<<" ";
        last = last->prev;
    }
}

int main()
{
    Node* head = NULL;
    push(&head,6);
    push(&head,7);
    push(&head,1);
    push(&head,78);
    cout<<"created DLL is :";
    printList(head);
    return 0;
}
