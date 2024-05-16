// Doubly linked list and convert array into a doubly linked list and reverse the linked list
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
Node* Approach1(Node* head){
    //This approach has the time complexity is of O(2N) and the space complexity is O(N).
    Node* temp=head;
    stack<int>ab;
    while(temp!=NULL){// Adding elements in the stack because it works on the principle of LIFO
        ab.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        // passing stack elements in Linked list
        temp->data=ab.top();
        ab.pop();
        temp=temp->next;
    }
    return head;


}
Node* Approach2(Node* head){
    // This approach has the time complexity is of O(N) and the space complexity is O(1).
    Node* last=nullptr;
    Node*temp=head;
    while(temp!=NULL){
        last=temp->prev;
        temp->prev=temp->next;
        temp->next=last;
        temp=temp->prev;
    }
    return last->prev;
}
int main(){
    vector<int>arr={10,20,30,40,50,60};
    Node* head=carrtoDLL(arr);
    head=Approach2(head);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;

}