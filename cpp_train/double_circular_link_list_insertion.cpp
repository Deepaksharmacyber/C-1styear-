//wap to insert node in double circular linked list

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void insertEnd(Node** start,int value){
    if(*start==NULL){
        Node* new_node = new Node;
        new_node->data = value ;
        new_node->next = new_node->prev=new_node; 
        *start = new_node;
    }

    Node* last = (*start)->prev;
    Node* new_node = new Node;
    new_node->next = *start;
    new_node->prev = last;
    last->next     = new_node;
    (*start)->prev = new_node;
}

void insertBegin(Node** start,int value){
    Node* last     = (*start)->prev;
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = (*start);
    new_node->prev = last;
    last->next= (*start)->prev=new_node;
    (*start)= new_node;
}

void insertAfter(Node** start,int value1,int value2){
    Node* new_node = new Node;
    new_node->data = value1;
    
    Node* temp = *start;
    while(temp!=NULL){
        temp=temp->next;
    }

    Node* next =temp->next;
    temp->next    =new_node;
    new_node->next=next;
    new_node->prev=temp;
    next->prev    = new_node;
}

void display(Node* start){
    Node* temp = start;

    cout<<"\n traversal in forward direction \n";
    while(temp->next!=start){
        cout<<temp->data;
        temp = temp->next;
    }

    cout<<temp->data;

    cout<<"\n traversal in reverse direction \n";

    Node* last = start->prev;
    temp = last;
    while(temp->prev!=last){
        cout<<temp->data;
    }
    cout<<temp->data;
}

int main(){
    Node* start = NULL;
    insertEnd(&start,5);
    insertBegin(&start,4);
    insertEnd(&start,7);
    insertEnd(&start,8);
    insertAfter(&start,6,5);
    cout<<("created circular double linked list is:");
    display(start);
    return 0;

}