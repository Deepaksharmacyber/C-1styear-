//wap to delete node from double linked list .

#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void insert(Node** start, int value){
    if(*start==NULL){
        Node* new_node = new Node();
        new_node->data = value;
        new_node->next = new_node;
        new_node->prev = new_node;
        (*start)       = new_node;
        return ;
    }

    Node* last     = (*start)->prev; 
    Node* new_node = new Node();
    new_node->data = value;
    new_node->next = (*start);
    new_node->prev = last;
    (*start)->prev = last->next= new_node;
}

void deleteNode(Node** start,int key){
    if(*start==NULL){
        return ;
    }

    Node* curr = *start , *prev_1 = NULL;
    while(curr->data!=key){
        if(curr->next==(*start)){
            cout<<"\n List doesnot have node with value "<<key ;
            return ;
        }
        prev_1 = curr ; 
        curr = curr->next;
    }

    if(curr->next==*start && prev_1 ==NULL){
        (*start)==NULL;
        free(curr);
        return ;
    }

    if(curr==(*start)){
        prev_1         = (*start)->prev;
        *start         = (*start)->next;
        prev_1->next   = *start ;
        (*start)->prev = prev_1;
        free(curr);
    }
    else if (curr->next== (*start)){
        prev_1->next   = *start;
        (*start)->prev = prev_1;
        free(curr);
    }
    else{
        Node* temp = curr->next;
        prev_1->next = temp;
        temp->prev   = prev_1;
        free(curr);
    }
}

void display(Node* start){
    Node* temp = start;
    while(temp->next!=start){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<temp->data<<" ";
}

int main(){
    Node* start = NULL;
    insert(&start,4);
    insert(&start,5);
    insert(&start,6);
    insert(&start,7);
    insert(&start,8);

    cout<<"list before deletion";
    display(start);

    deleteNode(&start,9);
    cout<<"\n List after deletion 9";
    display(start);

    deleteNode(&start,4);
    cout<<"\n list after deleting 4";
    display(start);

    deleteNode(&start,8);
    cout<<"\n list after deleting 8";
    display(start);

    deleteNode(&start,6);
    cout<<"\n List after deleting 6";
    display(start);

    return 0;
    
}