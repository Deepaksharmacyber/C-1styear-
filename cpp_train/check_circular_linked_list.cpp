//wap to check linked list is circular or not ?

#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
    int data;
    Node* next;
};

bool iscircular(Node* head){
    if(head==NULL){
        return true ;
    }
    Node* node = head->next;

    while(node!=NULL && node!= head){
        node=node->next;
    }

    return (node==head);
}

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main(){
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    iscircular(head)? cout<<"yes\n":
                      cout<<"no\n";

    head->next->next->next->next = head;

    iscircular(head)? cout<<"yes\n":
                      cout<<"yes\n";
}