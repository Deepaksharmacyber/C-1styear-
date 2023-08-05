// wap to insert data in circular linked list 

#include<bits/stdc++.h>
using namespace std ;

class Node{
    public :
    int data;
    Node* next;
    Node* prev;
};

Node* addtoempty(Node* last,int data){
    if(last!=NULL){
        return last;
    }
    Node* temp = new Node();
    temp->data = data;
    last       = temp;
    temp->next = last;
    return last;
}

Node* addBegin(Node* last ,int data){
    if(last==NULL){
        return addtoempty(last,data);
    }

    Node* temp = new Node();
    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    return last;
}

Node* addEnd(Node* last,int data){
    if(last==NULL){
        return addtoempty(last,data);
    }
    Node* temp = new Node();
    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    last=temp;
    return last;
}

Node* addafter(Node* last,int data,int item){
    if(last==NULL){
        return NULL;
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
            return last;
        }
        p=p->next;
    }while(p!=last->next);
    cout<<item<<" not present in this list"<<endl;
    return last;
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
    last = addtoempty(last,6);
    last = addBegin(last,4);
    last = addBegin(last,2);
    last = addEnd(last,8);
    last = addEnd(last,12);
    last = addafter(last,10,22);

    traverse(last);
    return 0;
}
