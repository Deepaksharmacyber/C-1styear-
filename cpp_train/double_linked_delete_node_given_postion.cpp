//wap to delete a node in double linked list 

#include<iostream>
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
    return ;
}

void deleteNodeatGivenPosition(Node** head_ref,int n){
    if((*head_ref)==NULL||n<=0){
        return ;
    }

    Node* current = *head_ref;

    for(int i=1;current!=NULL&&i<n;i++){
        current = current->next;
    }

    if(current==NULL){
        return ;
    }

    deleteNode(head_ref,current);
}

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if(*head_ref!=NULL){
        (*head_ref)->prev=new_node;
    }

    *head_ref=new_node;
}

void printList(Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main(){
    Node* head = NULL;
    push(&head,5);
    push(&head,2);
    push(&head,4);
    push(&head,8);
    push(&head,10);

    cout<<"linked list before deletion ";
    printList(head);
    
    int n =2;
    cout<<"\n";
    
    deleteNodeatGivenPosition(&head,n);

    cout<<"linked list after deletion ";
    printList(head);
}