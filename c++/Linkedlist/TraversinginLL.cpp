// In this part we traverse in the linked list, find the length of the linked list and the searching in linked list
// All these operation has time complexity is O(N) and constant space complexity
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
// function that converts the array into linked list
Node* cnvrta2LL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int search(Node* head,int k){
    Node* temp=head;
    while(temp){
        if(temp->data==k) return 1;
        temp=temp->next;
    }
    return 0;
}
int main(){
    int cnt=0;
    vector<int>arr={1,2,3,4};

    Node* head=cnvrta2LL(arr);
    cout<<head->data<<"  "<<head->next<<endl;
// First rule in Linked list is never ever temper the head .. because if we change it we lose our starting address of the Linked list
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    cout<<endl<<"Length of Linked list is "<<cnt<<endl;
    cout<<search(head,4);
    return 0;


}