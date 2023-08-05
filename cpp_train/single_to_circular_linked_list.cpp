// single to circular linked list

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
// };

// node* circular(node* head){
//     node* start       = head;
//     while(head->next !=NULL){
//         head = head->next;
//     }
//     head->next = start;
//     return start;
// }

// void push(node** head , int data){
//     node* new_node = new node() ;
//     new_node->data = data;
//     new_node->next = (*head);
//     (*head)        = new_node; 
// }

// void displayList(node* temp){
//     node* start = temp;
//     while(temp->next!=start){
//         cout<<" "<<temp->data;
//         temp = temp->next;
//     }
//     cout<<" "<<temp->data;
// }

// int main(){
//     node* head = NULL;
//     push(&head,15);
//     push(&head,14);
//     push(&head,13);
//     push(&head,22);
//     push(&head,17);

//     circular(head);
//     cout<<"display list: \n";
//     displayList(head);
// }


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* circular(node* head){
    node* start       = head;
    while(head->next !=NULL){
        head = head->next;
    }
    head->next = start;
    return start;
}

void push(node** head , int data){
    node* new_node = new node() ;
    new_node->data = data;
    new_node->next = (*head);
    (*head)        = new_node; 
}

void displayList(node* temp){
    node* start = temp;
    while(temp->next!=start){
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<" "<<temp->data;
}

int main(){
    node* head = NULL;
    push(&head,15);
    push(&head,14);
    push(&head,13);
    push(&head,22);
    push(&head,17);

    circular(head);
    cout<<"display list: \n";
    displayList(head);
}
