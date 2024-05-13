// Insertion in Doubly linked list -- we will able to do insertion in linked list from 4 ways.
/*  --- head
    --- position
    --- value
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
// Node* deleteH( Node* h){
//     if(h==NULL || h->next==NULL) return NULL;
//     Node* temp=h;
//     h=h->next;
//     h->prev=nullptr;
//     temp->next=nullptr;
//     delete temp;
//     return h;

// }
Node* deleteT(Node* h){
    if(h==NULL || h->next==NULL) return NULL;
    Node* prev=h;
    while(prev->next!=NULL){
        prev=prev->next;
    }
    Node* tail=tail->prev;
    tail->next=nullptr;
    prev->prev=nullptr;
    delete prev;
    return h;

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
    head=deleteT(head);
    print(head);
    return 0;


}