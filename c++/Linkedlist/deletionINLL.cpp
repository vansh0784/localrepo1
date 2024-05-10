// In this problem we have to perform deletion and insertion in Linked list int 4 ways
/*  --- head
    --- position
    --- value
    --- last
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* cnvrtarr2LL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* deleteHead(Node* head){
    //edge case-- what if the linked list has one node
    if(head->next== NULL) return head;
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deletetail(Node* head){
    // edge case -- what if the linked list has one node
    if(head->next==NULL || head==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

int main(){
    vector<int>arr={2,4,6,8,10};
    Node* head=cnvrtarr2LL(arr);
    head=deletetail(head);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    return 0;
}