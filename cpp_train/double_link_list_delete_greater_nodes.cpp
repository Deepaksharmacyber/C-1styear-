//wap to delte nodes which are greater than a given value

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if(*head_ref!=NULL){
        (*head_ref)->prev = new_node;
    }

    *head_ref = new_node;
}

void deleteNode(Node** head_ref,Node* del){
    if(*head_ref==NULL || del==NULL){
        return ;
    }

    if((*head_ref)== del){
        (*head_ref)=del->next;
    }

    if(del->next!=NULL){
        del->next->prev=del->prev;
    }

    if(del->prev!=NULL){
        del->prev->next=del->next;
    }
}

void deleteGreaterNodes(Node** head_ref,int x){
    if(*head_ref == NULL){
        return ;
    }

    Node* ptr = *head_ref;
    Node* next;
    while(ptr!=NULL){
        next=ptr->next;
        if(ptr->data>x){
            deleteNode(head_ref,ptr);
        }
        ptr = next;
    }
}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    Node* head = NULL;
    push(&head,9);
    push(&head,11);
    push(&head,4);
    push(&head,8);
    push(&head,10);

    int x=9;
    cout<<"original list ";
    printList(head);

    cout<<"\n";

    deleteGreaterNodes(&head,x);

    cout<<"Modified List ";
    printList(head);

    return 0;
}

