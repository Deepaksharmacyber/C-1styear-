//Reverse a Linked List

#include<bits/stdc++.h>
 
using namespace std;
 
class node {
    public :
    int data;
    node *next;
};
 
// To create a demo we have to construct a linked list and this 
// function is to push the elements to the list. 
void push(node **head_ref, int new_data) {
    node* new_node = new node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
// Function to reverse the list
void reverse(node **head_ref) {
    node *next = NULL;
    node *prev = NULL;
    node *current = (*head_ref);
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    (*head_ref) = prev;
}
 
// To check our program 
void printnodes(node *head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}
 
// Driver function
int main() {
    node *head = NULL;
    push(&head, 0);
    push(&head, 1);
    push(&head, 8);
    push(&head, 0);
    push(&head, 4);
    push(&head, 10);
    cout << "Linked List Before Reversing" << endl;
    printnodes(head);
    reverse(&head);
    cout << endl;
    cout << "Linked List After Reversing"<<endl;
    printnodes(head);
    return 0;
}
