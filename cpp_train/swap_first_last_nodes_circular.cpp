#include<bits/stdc++.h>
using namespace std ;

class Node{
    public :
    int data;
    Node* next ;
};

void push(Node** head_ref,int data){
    Node* ptr1 = new Node();
    ptr1->data = data;
    ptr1->next = *head_ref;

    if(*head_ref!=NULL){
        Node* temp = *head_ref;
        while(temp->next!=*head_ref){
            temp = temp->next;
        }
        temp->next=ptr1;
    }
    else {
        ptr1->next=ptr1;
    }
    *head_ref=ptr1;
}

void printList(Node* head){
    Node* temp = head;
    if(head!=NULL){
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=head);
    }
    cout<<endl;
}

void exchangeNodes(Node *&head){
    if(head->next->next==head){
        head=head->next;
        return;
    }

    Node* p = head;
    while(p->next->next!=head){
        p=p->next;
    }

    p->next->next = head->next;
    head->next    = p->next;
    p->next       = head;
    head          = head->next;
}

int main()
{
    int i;
    Node* head = NULL;
    push(&head,6);
    push(&head,7);
    push(&head,8);
    push(&head,9);
    push(&head,10);

    cout << "List Before: ";
    printList(head);
    cout << endl;
 
    cout << "List After: ";
    exchangeNodes(head);
    printList(head);
 
    return 0;
}