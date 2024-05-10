// In this problem we have to convert the array into Linked list
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
int main(){
    vector<int>arr={1,2,3,4};

    Node* head=cnvrta2LL(arr);
    cout<<head->data<<"  "<<head->next<<endl;



}