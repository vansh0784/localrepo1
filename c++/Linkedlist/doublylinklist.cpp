// Doubly linked list and convert array into a doubly linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    public:
    Node(Node* p,int data1,Node* n){
        prev=p;
        data=data1;
        next=n;
    }
    public:
    Node(int data1){
        prev=nullptr;
        data=data1;
        next=nullptr;
    }

};
Node* carrtoDLL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(prev,arr[i],nullptr);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
int main(){
    vector<int>arr={10,20,30,40,50,60};
    Node* head=carrtoDLL(arr);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;

}