// Insertion in Doubly linked list -- we will able to do insertion in linked list from 4 ways.
/*  --- head
    --- position
    --- Node
    --- last
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    public:
    Node(int data1){
        prev=nullptr;
        data=data1;
        next=nullptr;
    }
    public:
    Node(Node* p, int data1, Node* n){
        prev=p;
        data=data1;
        next=n;
    }
};
Node* carr2DLL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(prev,arr[i],nullptr);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* deleteH( Node* h){
    if(h==NULL || h->next==NULL) return NULL;
    Node* temp=h;
    h=h->next;
    h->prev=nullptr;
    temp->next=nullptr;
    delete temp;
    return h;

}
Node* deleteT(Node* head){
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* previous=tail->prev;
    tail->prev=nullptr;
    previous->next=nullptr;
    delete tail;
    return head;

}
Node* deletek(Node* head, int k){
    if(head==NULL) return NULL;
    int cnt=0;
    Node* temp=head;
    while(temp->next!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* p=temp->prev;
    Node* f=temp->next;
    // this condition is for to check
    if(f==NULL && p==NULL) return NULL;
    else if(p==NULL)// we have to delete the head;
    {
        head=head->next;
        temp->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        return head;

    }
    else if( f==NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
        // we are at last index na
        Node* previous=temp->prev;
        previous->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        return head;

    }
    p->next=f;
    f->prev=p;
    temp->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;
}
void deleteNode(Node* head){
   Node* f=head->next;
   Node* p=head->prev;
   // we cannot delete the head in that case beacause if we delete it we have to write some other edges cases for it
   if(f==NULL){
    p->next=nullptr;
    f->prev=nullptr;
    delete f;
    return;
   }
   // In any case , a node has both front and previous
   else {
    p->next=f;
    f->prev=p;
    head->next=head->prev=nullptr;
   }
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp=temp->next;

    }
}
int main(){
    vector<int>arr={10,8,6,4,2,0};
    Node* head=carr2DLL(arr);
    deleteNode(head->next->next->next->next->next);
    print(head);
    return 0;
}