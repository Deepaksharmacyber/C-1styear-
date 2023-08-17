// wap to insert data in circular linked list 

#include<bits/stdc++.h>
using namespace std ;

class Node{
    public :
    int data;
    Node *next;
};

void addtoempty(Node *&last,int data){
    if(last!=NULL){
        return;
    }
    Node* temp = new Node();
    temp->data = data;
    last       = temp;
    temp->next = last;
    return ;
}

void addBegin(Node *&last ,int data){
    if(last==NULL){
        return addtoempty(last,data);
    }

    Node* temp = new Node();
    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    return;
}

void addEnd(Node *&last,int data){
    if(last==NULL){
        return addtoempty(last,data);
    }
    Node* temp = new Node();
    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    last=temp;
    return;
}

void addafter(Node *&last,int data,int item){
    if(last==NULL){
        return;
    }

    Node* temp,*p;
    p=last->next;
    do{
        if(p->data==item){
            Node* temp = new Node();
            temp->data = data;
            temp->next = p->next;
            p->next    = temp;
            if (p == last){
                last = temp;
            }
            return;
        }
        p=p->next;
    }while(p!=last->next);
    cout<<item<<" not present in this list"<<endl;
    return;
}

void traverse(Node* last){
    Node* p;
    if(last==NULL){
        cout<<"the list is empty"<<endl;
        return ;
    }
    p=last->next;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=last->next);
}

int main(){
    Node* last = NULL;
    addtoempty(last,6);
    addBegin(last,4);
    addBegin(last,2);
    addEnd(last,8);
    addEnd(last,12);
    addafter(last,10,8);

    traverse(last);
    return 0;
}
