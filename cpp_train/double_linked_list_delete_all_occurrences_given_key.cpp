//wap to delete all occurrances of a given key in a double linked list


#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void deleteNode(Node** head_ref,Node* del){
    if(*head_ref==NULL || del==NULL){
        return ;
    }

    if(*head_ref==del){
        *head_ref=del->next;
    }

    if(del->next!=NULL){
        del->next->prev=del->prev;
    }

    if(del->prev!=NULL){
        del->prev->next=del->next;
    }
    free(del);
}


void deletealloccurofx(Node** head_ref,int x){
    if((*head_ref)==NULL){
        return ;
    }

    Node* current = *head_ref;
    Node* next;

    while(current!=NULL){
        if(current->data==x){
            next = current->next;

            deleteNode(head_ref,current);
            current=next;
        }
        else{
            current=current->next;
        }
    }
}

void push(Node** head_ref,int new_data){
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if((*head_ref)!=NULL){
        (*head_ref)->prev = new_node;
    }

    (*head_ref)= new_node;
}

void printList(Node* head){
    if(head==NULL){
        cout<<"dounle linked list is empty ";
        return ;
    }

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node* head = NULL;

    push(&head,2);
    push(&head,5);
    push(&head,2);
    push(&head,4);
    push(&head,8);
    push(&head,10);
    push(&head,2);
    push(&head,2);

    cout<<"linked list before deletion ";
    printList(head);
    
    cout<<"\n";
    int x =2;
    deletealloccurofx(&head,x);
    cout<<"linked list after deletion";
    printList(head);
    return 0;
}