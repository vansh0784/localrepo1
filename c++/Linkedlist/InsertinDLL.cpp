// Insertion in Doubly linked list -- we will able to do insertion in linked list from 4 ways.
// All these operations are performed before the listed positions
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
Node* insertH( Node* head){
    Node* temp=new Node(nullptr,12,head);
    head->prev=temp;
    return temp;

}
Node* insertT(Node* head){
    Node* temp=head;
    // this lines traverse at the end of the node
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* previous=temp->prev;
    Node* insert=new Node(previous,1,temp);
    temp->prev=insert;
    previous->next=insert;

    return head;
}
Node* insertK(Node* head,int val,int k){
    Node* temp=head;
    if(k==1) return insertH(head);
    int cnt=0;
    while(temp->next!=NULL){
        cnt++;
        if(k==cnt){
            Node* previous=temp->prev;
            Node* insert=new Node(previous,val,temp);
            previous->next=insert;
            temp->prev=insert;
            return head;
        }
        temp=temp->next;
    }
    return head;

}
void insertNode(Node* node,int val){
    // In this case we there is no node assign to us which is equal to node because for that we have to write the other edge cases
    Node* prev=node->prev;
    Node* insert=new Node(prev,val,node);
    prev->next=insert;
    node->prev=insert;

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
    int val,k;
    cout<<"Enter the value"<<endl;
    cout<<"Enter the k"<<endl;
    cin>>val>>k;
    Node* head=carr2DLL(arr);
    insertNode(head->next,val);
    print(head);
    return 0;


}