//modify a circular doubly linked list such that each node stores the sum of all nodes except itself.

#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void insertEnd(Node** start , int value){
    if(*start==NULL){
        Node* new_node = new Node();
        new_node->data = value;
        new_node->next = new_node;
        new_node->prev = new_node;
        (*start)       = new_node;
        return ;
    }

    Node* last = (*start)->prev;
    Node* new_node = new Node();
    new_node->data = value;
    new_node->next = *start;
    new_node->prev = last;
    last->next     = (*start)->prev=new_node;
}

void display(Node* start){
    Node* temp = start;
    cout<<"Traversal in forward direction \n";

    while(temp->next!=start){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<" ";

    cout<<" \n Traversal in reverse direction \n";

    Node* last = start->prev;
    temp = last ;
    while(temp->prev!=last){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<temp->data<<" ";
}

int findsum(Node*& start){
    int sum = 0;
    Node* temp = start;
    while(temp->next!=start){
        sum += temp->data;
        temp = temp->next;
    }
    sum += temp->data;

    return sum;
}

void updateNodevalue(Node*& start){
    int sum= findsum(start);
    Node* temp = start;

    while(temp->next!=start){
        temp->data = sum- temp->data;
        temp = temp->next;
    }
    temp->data = sum-temp->data;
}

Node* fromLinkedList(Node* start){
    insertEnd(&start,4);
    insertEnd(&start,5);
    insertEnd(&start,6);      
    insertEnd(&start,7);
    insertEnd(&start,8);

    return start;
}

int main(){
    Node* start = NULL;
    start = fromLinkedList(start);

    display(start);

    updateNodevalue(start);

    cout<<"\n after updating "
        <<" the node values:\n";

    display(start);

    return 0 ;
}